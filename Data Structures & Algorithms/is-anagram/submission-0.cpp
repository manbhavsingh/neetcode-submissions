class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<int> alpha(26,0);
        for(auto it:s){
            alpha[it-'a']++;
        }
        for(auto it:t){
            alpha[it-'a']--;
        }
        for(auto it:alpha){
            if(it!=0){
                return false;
            }
        }
        return true;
    }
};
