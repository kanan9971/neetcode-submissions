class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n = s.size();
        int counter = 0;
        int max = 0;
        int left = 0;
        int right = 0;

        while (right < n) {
            if (!mp.count(s[right])) {
                mp[s[right]] = right;
                counter = right - left + 1;
                if (max < counter) {
                    max = counter;
                }
                right++;
            }
            else {
                mp.erase(s[left]);
                left++;
            }
        }
        return max;
    }
};