class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n = s.size();
        int counter = 0;
        int max = 0;
        int left = 0;
        int right= 0;
        if(n == 0){
            return 0;
        }
        else{
            while(right!= (n)){
            if(!mp.count(s[right])){
                counter++;
                mp[s[right]];
                if(max< counter){
                    max = counter;
                }
                right++;

            }
            else{
                counter = 0;
                left++;
                right = left;
                mp.clear();
            }
            }
        }
        return max;
    }
};
