class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int currlen=0;
        int maxlen=0;
        int lastele=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastele){
                currlen++;
            }
            else if(nums[i]==lastele){
                continue;
            }
            else{
                maxlen=max(maxlen,currlen);
                currlen=1;
            }
            lastele=nums[i];
        }
        maxlen=max(maxlen,currlen);
        return maxlen;
    }
};
