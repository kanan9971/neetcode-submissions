class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map < char , int > mp;
        int left = 0; 
        int right = 0;
        int max_size =0;
        
        while(right < s.size()){
           int temp_size = right - left +1;
            if(!mp.count(s[right])){
                mp[s[right]]++;
                if(max_size<temp_size){
                    max_size = temp_size;
                }
                right++;

            }

            else {
                mp.erase(s[left]);
                left++;
                

            }
        }
        return max_size;
    }
};
