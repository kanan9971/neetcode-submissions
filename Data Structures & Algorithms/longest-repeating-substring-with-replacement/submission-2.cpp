class Solution {
public:
    int characterReplacement(string s, int k) {
        // map to store the character and their counts
        unordered_map<char, int> mp;

        int left = 0;
        int right = 0;
        int max_value = 0;
        int max_total = 0;

        while (right < s.size()) {
            // Always add the current right character.
            mp[s[right]]++;

            if (max_value < mp[s[right]]) {
                max_value = mp[s[right]];
            }

            int window = right - left + 1;

            // If too many characters would need replacement, shrink once.
            if (window - max_value > k) {
                mp[s[left]]--;
                left++;
            }

            // Use the potentially updated window length.
            max_total = max(max_total, right - left + 1);

            // Move right once, at the end of every iteration.
            right++;
        }

        return max_total;
    }
};