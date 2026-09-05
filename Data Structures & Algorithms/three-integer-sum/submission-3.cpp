class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int >> result;
    
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i= 0; i < n; i++){
            int left = i+1;
            int right = n-1;
            
            if(i > 0 && nums[i]== nums[i-1]){
                continue;
            }
            
            while(left < right){
                int sum = nums[i]+nums[left]+ nums[right];

                if(sum < 0 ){
                    left++;

                }

                else if(sum > 0){
                    right --;
                }

                else if(sum ==0){
                    vector < int> temp_res { nums[i], nums[left],nums[right]};
                    result.push_back(temp_res);
                    left++;
                    right--;

                    while(left < right && nums[left]== nums[left-1]){
                        left++;
                    }

                }


            }
        }  
        return result;
    
    }   
};
