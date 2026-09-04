class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>result;

        for(string s : strs){
            string sortS = s;
             sort(sortS.begin(),sortS.end());
            mp[sortS].push_back(s);
        }

        for(const auto& pair:mp){
            result.push_back(pair.second);
        }

        return result;
    }

    
};
