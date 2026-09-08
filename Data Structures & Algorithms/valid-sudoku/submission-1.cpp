class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        bool cols[9][9] = {false};
        bool rows[9][9] = {false};
        bool boxes [9][9] = {false};

        for(int i =0; i <9; i++){
            for( int j=0; j<9; j++){
                if(board[i][j] == '.'){
                    continue;
                }

                int nums = board[i][j] -'0' -1;

                int boxIndex = ((i/3) *3) + (j/3);
                if(cols[i][nums] || rows[j][nums] || boxes[boxIndex][nums]){
                    return false;
                }

                cols[i][nums] = true;
                rows[j][nums] = true;
                boxes[boxIndex][nums] = true;
            }


        }

        return true;
        



            
            
        
    }
};