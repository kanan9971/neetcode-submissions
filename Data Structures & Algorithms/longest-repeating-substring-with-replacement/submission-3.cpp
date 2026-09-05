class Solution {
public:
    int characterReplacement(string s, int k) {
        // map to store the character and their counts
        unordered_map < char, int>  mp;
        int left = 0;
        int right = 0;
        int max_value =0; // maximum or most common repeating char
        int max_total = 0;
        while(right < s.size()){
            int window = right -left+1; // size of window
            mp[s[right]]++;
            if(max_value< mp[s[right]]){
                    max_value = mp[s[right]];
                }
            
         
                


             if(window - max_value > k){
                mp[s[left]]--;
                left++;
                    
                }

            

                
        
                max_total = max(right - left +1 , max_total);
                right++;
            
        
        }
        return max_total;
    }
};
