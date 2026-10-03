class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int > mp;

        for(int n :nums){
            mp[n]++;
        }

        vector<vector<int>> temp(nums.size()+1);

        for(const auto& p:mp){
            temp[p.second].push_back(p.first);
        }
        vector<int> result;
        for(int i =nums.size();i>0;i--){
            for(int n : temp[i]){
                if(result.size()== k){
                    return result;
                }
                else {
                    result.push_back(n);
                }
            }
        }
        return result;
    }

};
