class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        
        if(left == right && nums[left]== target){
            return left;
        }
        else { return -1}
        while(left<=right){
            int mid = left + (right -left)/2;

            if(nums[mid]== target){
                return mid;
            }
           else if(target< nums[mid]&& target > nums[left]){
                right = mid;
            }

            else if( target < nums[mid]&& target < nums[left] ){
                left = mid;
            }

            else{ break;}

            
        }
        return -1;
    }
};
