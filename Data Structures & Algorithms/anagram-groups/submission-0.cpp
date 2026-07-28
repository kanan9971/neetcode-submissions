class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // key = sorted version of the word, value = all words that match that key
        // "eat", "tea", "ate" all sort to "aet" -> same bucket
        unordered_map<string, vector<string>> mp;

        for (const string& s : strs) {   // const& so we never touch the input
            string key = s;              // copy -> original word stays intact
            sort(key.begin(), key.end()); // "eat" -> "aet"
            mp[key].push_back(s);        // push the ORIGINAL, not the sorted one
                                         // operator[] auto-creates an empty vector
                                         // the first time a key appears
        }

        // flatten the map's values into the result
        vector<vector<string>> res;
        res.reserve(mp.size());
        for (auto& p : mp)
            res.push_back(move(p.second)); // move avoids copying each group
        return res;
    }
};