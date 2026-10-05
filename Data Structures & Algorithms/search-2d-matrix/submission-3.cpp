class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int cols = matrix[0].size();

        int left_row = 0;
        int right_row = row-1;
        while(left_row != right_row){
            int mid_row = left_row + (right_row - left_row)/2;

            if(matrix[mid_row][cols-1]== target){
                return true;
            }

            else if(matrix[mid_row][cols-1]<target){
                left_row = mid_row+1;
            }

            else {
                right_row = mid_row -1;
            }
        }

        int left = 0;
        int right = cols-1; 
        while(left < right){
            int mid = left + (right - left)/2;

            if(matrix[left_row][mid]==target){
                return true;

            }

            else if(matrix[left_row][mid]<target){
                left = mid +1;
            }

            else {
                right = mid -1;
            }
        }

        return false;

    }
};
