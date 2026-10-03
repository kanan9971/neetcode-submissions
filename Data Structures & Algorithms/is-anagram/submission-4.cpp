class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;

        if(s.size()!= t.size()){
            return false;
        }
        for(char c:s){
            mp[c]++;
        }

        for(char c:t){
            if(!mp.count(c)){
                return false;
            }

            mp[c]--;
        }

        for(const auto& c:mp){
            if(c.second!=0){
                return false;
            }

        }
        return true;
    }
};
