class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int > mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
    
        vector <int> elements;
        for(int i = 0;i<k;i++){  
            int number = 0; 
            int freq = 0;
        for(const auto& pair:mp){
                if(freq<pair.second){
                    freq = pair.second;
                    number = pair.first;
                }


                
            }
            elements.push_back(number);
            mp.erase(number);
            
        }
        return elements;
    }
};
