class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map< int , int > mp;


        for(int i = 0; i <nums.size();i++ ){
            int difference = target - nums[i];

            if(mp.count(difference)==0){
                mp[nums[i]]=i;
            }

            else if (mp.count(difference) != 0 ) {
                vector < int> result; 
                result.push_back(mp[difference]);
                result.push_back(i);

                return result;
            }

            
        }
    }
};
