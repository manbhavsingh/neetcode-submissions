class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        unordered_set<int> st;
        int maxlen=1;
        for(auto it:nums){
            st.insert(it);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x=x+1;
                }
                maxlen=max(maxlen,cnt);
            }
        }
        return maxlen;
    }
};
