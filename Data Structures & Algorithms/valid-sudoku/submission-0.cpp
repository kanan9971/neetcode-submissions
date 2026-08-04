class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
   
        
        for(int i=0; i<9; i++){
            unordered_map<char,int> mp;

            for(int k =0; k<9;k++){
                mp[board[i][k]]++;
            }

            for(auto&p :mp){
                if(p.first != '.' && p.second >1){
                    return false;
                }
            }
        }

        for(int i =0; i<9; i++){
            unordered_map<char,int> col;
            for(int k =0; k<9;k++){
                col[board[k][i]]++;
            }
            for(auto&p :col){
                if(p.first != '.' && p.second >1){
                    return false;
                }
        }
    }
    for (int b = 0; b < 9; b++) {                          // 1
    unordered_map<char,int> box;                       // 2
    int startRow = (b / 3) * 3;                        // 3
    int startCol = (b % 3) * 3;                        // 4

    for (int r = 0; r < 3; r++) {                      // 5
        for (int c = 0; c < 3; c++) {                  // 6
            box[board[startRow + r][startCol + c]]++;  // 7
        }
    }

    for (auto& p : box) {                              // 8
        if (p.first != '.' && p.second > 1) {
            return false;
        }
    }
}

    return true;

    }

};
