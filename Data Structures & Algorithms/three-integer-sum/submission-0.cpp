#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        set<vector<int>> unique_triplets;
        vector<vector<int>> res;
        
        // Fix: Build the map dynamically or look backward to avoid missing indices
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int complement = 0 - (nums[i] + nums[j]);
                
                // Check if the complement exists in our map of *previously seen* numbers
                if (mp.count(complement) != 0) {
                    vector<int> triplet = {nums[i], nums[j], complement};
                    sort(triplet.begin(), triplet.end());
                    unique_triplets.insert(triplet);
                }
            }
            mp[nums[i]] = i;
        }
        
        for (const auto& triplet : unique_triplets) {
            res.push_back(triplet);
        }
        
        return res;
    }
};
