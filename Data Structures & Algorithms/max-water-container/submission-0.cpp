class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int left=0;
        int right=n-1;
        int mx=0;
        while(left<=right){
            int a=heights[left];
            int b=heights[right];
            int curr_area=min(a,b)*(right-left);
            mx=max(mx,curr_area);
            if(a<b){
                left++;
            }
            else{
                right--;
            }
        }
        return mx;
    }
};
