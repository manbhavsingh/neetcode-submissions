class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=0;
        int high=n-1;
        int r=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid][0]<=target){
                r=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(r==-1){
            return false;
        }
        if(matrix[r][0]==target){
            return true;
        }
        low=0;
        high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[r][mid]==target){
                return true;
            }
            else if(matrix[r][mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
