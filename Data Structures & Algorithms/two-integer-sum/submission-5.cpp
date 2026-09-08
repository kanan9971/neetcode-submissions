class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map < int , int > mp;

        vector<int > result ; 
        for(int i =0; i < nums.size(); i++){
            int difference = target - nums[i];

            if(mp.count(difference)){
                result.push_back(mp[difference]);
                result.push_back(i);
                return result;
            }

            else {
                mp[nums[i]] = i;
            }


        }

        return result;
    }
};
