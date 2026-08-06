class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>> res;
        for(auto s:strs){
            vector<int> count(26,0);
            for(auto c:s){
                count[c-'a']++;
            }
            string newstr="";
            for(int i=0;i<26;i++){
                if(count[i]>0){
                    newstr+=('a'+i);
                    newstr+=to_string(count[i]);
                }
            }
            res[newstr].push_back(s);
        }
        vector<vector<string>> final;
        for(auto it:res){
            final.push_back(it.second);
        }
        return final;
    }
};
