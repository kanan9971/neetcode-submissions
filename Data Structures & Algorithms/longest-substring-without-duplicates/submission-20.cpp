class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n = s.size();
        int counter = 0;
        int max = 0;
        int left = 0;
        int right = 0;

        while(right<n){
            if(mp.count(s[right])){
                mp.erase(s[left]);
                left++;
                counter= right - left ;
                
            }

           else { 
            mp[s[right]]=right;
            right++;
            counter++;
            if(max < counter){
                max = counter;}
            }


        }
        return max;
    }
};