class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;
        
        
        
        while(nums[left]>nums[right]){
            left = right;
            right = right -1;


        }

        return nums[left];
    }
};
