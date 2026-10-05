class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n = s.size();
        int counter = 0;
        int max = 0;
        for(int i =0; i <n; i++){
            if(!mp.count(s[i])){
                counter++;
                mp[s[i]];
                if(max< counter){
                    max = counter;
                }

            }
            else{
                counter = 0;
                mp.clear();
            }
        }
        return max;
    }
};
