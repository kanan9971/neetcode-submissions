class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int left =0;
        int right =0;
        int max_frequency = 0 ;
        int longest_count = 0;
        while(right < s.size()){
            mp[right]++;
            max_frequency = max(max_frequency,mp[s[right]]);

           
            if( (right - left)-max_frequency > k){
                mp[s[left]]--;
                left++;
            }

            else {
                right++;
                longest_count=max(longest_count, right - left);
            }

        

            
        }

        return longest_count;


    }
};
