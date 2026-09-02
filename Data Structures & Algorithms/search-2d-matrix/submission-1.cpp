class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int totalRows = matrix.size();
        int cols = matrix[0].size();
        
        //  finding the candidate row
        int row = 0;
        while (row < totalRows && target > matrix[row][cols - 1]) {
            row++;
        }
        if (row == totalRows) return false;  
        
        //  doing binary search that row
        int l = 0, r = cols - 1;
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (matrix[row][m] > target)      r = m - 1;
            else if (matrix[row][m] < target) l = m + 1;
            else                              return true;
        }
        return false;
    }
};