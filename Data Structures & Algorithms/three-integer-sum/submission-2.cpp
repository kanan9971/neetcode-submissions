class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int >> result;
        
        int left = 0; 
        int right = nums.size()-1;
        int mid = left +1;
        sort(nums.begin(), nums.end());

        while(left != nums.size()-2 && mid < right){
            vector<int> temp_list;
            int sum = nums[left] + nums[right] + nums[mid];
            if(nums[left]+nums[right]+ nums[mid]==0){
                temp_list.push_back(left);
                temp_list.push_back(mid);
                temp_list.push_back(right);

                result.push_back(temp_list);
                left++;
                mid = left +1;
                right = nums.size()-1;
            }

            if( sum < 0){
                if(mid<right){
                    mid++;
                }
                else {
                    left++;
                }

            }

            if(sum > 0){
                if(mid>left){
                    mid--;
                }
                else {
                    right --;
                }
            }
        }

        return result; 

    }
};
