class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map< string , vector<string>> mp; // key , value;
        
        for(string s : strs){
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());

            mp[sortedS].push_back(s);

        }

        for(const auto& pair : mp){
            result.push_back(pair.second);
        }


     return result;
    }


   

};
