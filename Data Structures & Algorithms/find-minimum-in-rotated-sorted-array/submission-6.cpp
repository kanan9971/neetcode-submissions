class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0;
        int right = nums.size()-1;
        int min = nums.size();

        while(left<right){
            int mid = left + (right-left)/2;
             

            if(min > nums[mid] ){
                min = nums[mid];
            }

            if(nums[mid]>= nums[left]){
                left = mid+1;
                
            }

            
            
            else {
                right = mid;
            }
        }

        return min;
        
    }
};
