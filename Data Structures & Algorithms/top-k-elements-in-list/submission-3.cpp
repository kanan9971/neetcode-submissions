class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int > mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket (nums.size()+1);

        for(const auto& pair : mp){
            bucket[pair.second].push_back(pair.first);
        }

        vector<int> elements;
        for(int i = nums.size();i<=1;i--){
            for(int buck : bucket[i]){
                elements.push_back(buck);

                if(elements.size()== k){
                    return elements;
                }
            }
        }
    
        
            
        
        
    }
};
