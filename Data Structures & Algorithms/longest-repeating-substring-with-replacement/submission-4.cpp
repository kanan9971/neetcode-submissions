class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int left =0;
        int right =0;
        int longest_count = 0;
        while(right < s.size()){
            int length = right -left;
            mp[right]++;
            if(mp[right] > k){
                mp[left]--;
                left++;
            }

            else {
                mp[right]++;
                right++;
                longest_count=max(longest_count, length);
            }

        

            
        }

        return longest_count;


    }
};
