class Solution {
private:
    long long fun(vector<int> &piles,int mid){
        int n=piles.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)piles[i]/(double)mid);
        }
        return sum;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(fun(piles,mid)<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
