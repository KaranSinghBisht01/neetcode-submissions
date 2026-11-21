class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
        int l=0,r=row*col-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int currrow=mid/col;
            int currcol=mid%col;

            if(matrix[currrow][currcol]==target) return true;
            else if(matrix[currrow][currcol]>target) r=mid-1;
            else l=mid+1;
        } 
        return false;
    }
};
