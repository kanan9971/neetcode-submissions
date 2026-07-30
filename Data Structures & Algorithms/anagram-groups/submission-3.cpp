class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // key = sorted version of the word, value = all words that match that key
        // "eat", "tea", "ate" all sort to "aet" -> same bucket
        unordered_map<string, vector<string>> mp;

        for(const string& s : strs){
            string key = s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);

        }

        vector<vector<string>> value;;
        for(auto& p : mp){
           value.push_back(move(p.second));


        }

        return value;
    }
};