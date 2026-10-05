class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result ;

     
        
        
        sort(nums.begin(),nums.end());
        
        for(int i =0; i <nums.size()-1; i++){
            int mid = i +1;
            int right = nums.size()-1;
            
            if(i >0 && nums[i]== nums[i-1]){
                continue;
            }

            

            while(mid < right){
                int sum = nums[i]+nums[mid] + nums[right];
                if(sum < 0){
                    mid++;
                }

                else if ( sum > 0){
                    right--;
                }

                else {
                    vector<int> temp {nums[i], nums[mid], nums[right]};
                    result.push_back(temp);
                    mid++;
                    right --;
                }



            }
        }

        return result;
    
    }   
};
