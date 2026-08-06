class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        if(x<0){
            return false;
        }
        int num=0;
        while(temp){
            num=num*10+(temp%10);
            temp/=10;
        }
        if(num==x){
            return true;
        }
        return false;
    }
};