class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string res="";
        for(auto it:s){
            if(isalnum(it)){
                res+=tolower(it);
            }
        }
        string res1=res;
        reverse(res.begin(),res.end());
        if(res==res1){
            return true;
        }
        return false;
    }
};
