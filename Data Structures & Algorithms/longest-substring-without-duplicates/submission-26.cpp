class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length =0;
        unordered_map<char,int>mp;
        int left =0;
        int right = 0;
        while(right < s.size()){
            
            
            if(mp.count(s[right])){
               mp.erase(s[left]);
               left++;
               
            
            }

            else {
                mp[s[right]] = 1;
                right++;
                max_length = max(max_length, right - left);
                
            }
        }
        return max_length;
    }

};
