class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map < int , int > mp;
        for(int i : nums){
            mp[i]++;
        }

        vector<vector<int>> buckets (nums.size()+1) ; 
        for(const auto& pair : mp){
            buckets[pair.second].push_back(pair.first);
        }
        vector<int> result;
        for(int i =nums.size(); i>=1 ;i--){
            
            for(int j : buckets[i]){
                result.push_back(j);

                if(result.size() == k){
                    return result;
                }
            }

        }
        return result;

    }
};
