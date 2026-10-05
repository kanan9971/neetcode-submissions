class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size_of = nums.size()/3;
        int majority_element;
        vector < int > majority_elements;
        unordered_map<int,int> mp;
        for (int i =0; i<nums.size();i++){
            mp[nums[i]]++;
            
        }

        for( int i =0; i < mp.size();i++){
            if(mp[nums[i]]>size_of){
                majority_elements.push_back(nums[i]);}
        }
        
        return majority_elements;
    }
};