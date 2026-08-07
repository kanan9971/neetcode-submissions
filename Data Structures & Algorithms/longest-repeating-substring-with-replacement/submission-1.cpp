class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int n = s.size();
        int left = 0;
        int right = 0;
        int best = 0;
        int maxFreq = 0;

        while (right < n) {
            mp[s[right]]++;
            if (maxFreq < mp[s[right]]) {
                maxFreq = mp[s[right]];
            }
            right++;

            while ((right - left) - maxFreq > k) {
                mp[s[left]]--;
                left++;
            }

            if (best < (right - left)) {
                best = (right - left);
            }
        }
        return best;
    }
};