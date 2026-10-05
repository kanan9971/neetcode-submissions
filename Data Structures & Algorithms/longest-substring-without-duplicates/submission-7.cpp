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
            return 1;
        }
        else{
            while(right!= (n-1)){
            if(!mp.count(s[right])){
                counter++;
                mp[s[right]];
                if(max< counter){
                    max = counter;
                }
                right++;

            }
            else{
                left = right;
                counter = 0;
                mp.clear();
            }
            }
        }
        return max;
    }
};
