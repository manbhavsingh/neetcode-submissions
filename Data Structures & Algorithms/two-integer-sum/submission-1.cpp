class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            int complement=target-nums[i];
            if(mp.count(complement)!=0 && mp[complement]!=i){
                int mn=min(mp[complement],i);
                int mx=max(mp[complement],i);
                return {mn,mx};
            }
        }
        return {};
    }
};
