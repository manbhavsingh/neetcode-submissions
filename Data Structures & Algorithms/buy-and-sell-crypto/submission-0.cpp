class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> leftmin(n);
        vector<int> rightmax(n);
        leftmin[0]=prices[0];
        for(int i=1;i<n;i++){
            leftmin[i]=min(leftmin[i-1],prices[i]);
        }
        rightmax[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],prices[i]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            res=max(res,rightmax[i]-leftmin[i]);
        }
        return res;
    }
};
