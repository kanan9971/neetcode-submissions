class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int >  mp;
        vector<int> result;
        for(int i =0; i<nums.size();i++){
            int difference = target - nums[i];
            if(!mp.count(difference)){
                mp[nums[i]] = i;
            }

            else {
                result.push_back(mp[difference]);
                result.push_back(i);
            }
        }
        return result;
        
    }
};
