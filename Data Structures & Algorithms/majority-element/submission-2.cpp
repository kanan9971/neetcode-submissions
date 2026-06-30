class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int element_size = nums.size()/2;
        int majority_element;

        for(int i =0; i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>element_size){
                majority_element = nums[i];
                break;
            }
        
        }

     return majority_element;
    }
};