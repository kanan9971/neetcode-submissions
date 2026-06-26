class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = (int)s.size() - 1;

        while (left < right) {

            // move left to next alphanumeric
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // move right to previous alphanumeric
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // compare lowercase versions
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};