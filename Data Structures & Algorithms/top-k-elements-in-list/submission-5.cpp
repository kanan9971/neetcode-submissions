class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map < int , int> mp;
        for(int i =0; i <nums.size();i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> buckets(nums.size()+1);
        for(const auto& pair: mp){
            buckets[pair.second].push_back(pair.first);
        }
        vector < int > result;
        for(int i = nums.size(); i>=1; i--){
            for(int j=0; j <buckets[i].size(); j++){
                result.push_back( buckets[i][j]);

                if(result.size()==k)
                {
                    return result;
                }
            }
        }
        
        return result;

    }
};
