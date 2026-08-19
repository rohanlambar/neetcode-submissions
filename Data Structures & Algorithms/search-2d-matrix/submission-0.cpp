class Solution {
public:
    bool helper(vector<vector<int>> &matrix,int low ,int high,int target ){
         if(low > high) return false;
         int mid = low + (high-low)/2;
         int rows = mid/matrix[0].size();
         int cols = mid%matrix[0].size();
         if(matrix[rows][cols] < target) helper(matrix,mid+1,high,target);
         else if(matrix[rows][cols] > target )helper(matrix,low,mid-1,target);
         else return true;

         
         
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int length = n*m;
        return helper(matrix,0,length-1,target);
    }
};
