class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length =0;
        unordered_map<char,int>mp;
        int left =0;
        int right = 0;
        while(right < s.size()){
            int length = right+1 - left;
            
            if(mp.count(s[right])){
               left++;
               mp.erase(s[left]); 
            
            }

            else {
                mp[s[right]];
                max_length = max(max_length, length);
                right++;
            }
        }
        return max_length;
    }

};
