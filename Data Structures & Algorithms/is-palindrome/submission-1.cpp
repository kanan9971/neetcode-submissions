class Solution {
public:
    bool isPalindrome(string s) {
        int left =0;
        int right = s.size()-1;
        for(int i =0; i < s.size(); i++){
            if(s[left]!=s[right]){
                return false;
            }
            else{
            left++;
            right--;}
        }
        return true;
    }
};
