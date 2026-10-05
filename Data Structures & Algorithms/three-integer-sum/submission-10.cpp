class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i =0;i < nums.size()-2;i++){
            int mid = i +1;
            int right = nums.size()-1;
            
            while(mid> i && mid<right){
                int sum = nums[i]+nums[mid]+nums[right];
                if(sum > 0){
                    right--;
                }

                else if(sum < 0){
                    mid++;
                }

                else if(sum ==0){
                    vector<int> temp ;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[mid]);
                    temp.push_back(nums[right]);
                    result.push_back(temp);
                    break;
                    
                }

            }
        }
        return result;
    }
};
