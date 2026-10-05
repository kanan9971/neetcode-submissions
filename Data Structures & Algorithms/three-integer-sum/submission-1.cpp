class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int temp = 1;
        int n = nums.size();
        vector<vector<int>> res ;
        vector<int> target(3);
        sort(nums.begin(), nums.end());
        
        while(left < n-2){
            if(temp >= right){
                left++;
                while(left<n-2 && left>0 && nums[left]==nums[left-1]){
                    left++;
                    
                }
                temp = left+1;
                right = n-1;
                continue;

            }
            int sum = nums[left]+nums[right]+nums[temp];
            if(sum <0){
                temp++; 
            }

            else if(sum>0){
                right--;
            }

            

            else if( sum == 0){
                target[0]=nums[left];
                target[1] = nums[temp];
                target[2] = nums[right];
                res.push_back(target);
                temp++;
                right--;
                
                while(temp< right && nums[temp]==nums[temp-1]){
                    temp++;
                }
            }
        }

        return res;

        
    }
};
