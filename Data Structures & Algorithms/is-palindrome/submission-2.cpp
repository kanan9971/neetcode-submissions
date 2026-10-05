class Solution {
public:
    bool isPalindrome(string s) {
        int left =0;
        int right = s.size()-1;
        while(left!=(s.size()-1)){
            if(s[left]!=s[right]){
                return false;
            }
            else{
            left++;
            right--;}
            cout << left << endl;
        }
        return true;
    }
};
