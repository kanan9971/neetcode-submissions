class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i =0;i < nums.size()-2;i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
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
                    mid++;
                    right--;
                    while (mid < right && nums[mid] == nums[mid-1]) mid++;
                    while (mid < right && nums[right] == nums[right+1]) right--;
                    
                }

            }
        }
        return result;
    }
};
