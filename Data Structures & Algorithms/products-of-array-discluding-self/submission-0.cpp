class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();

    vector<int> left (n);
    vector<int> right(n);
    vector<int> result(n);
    int left_result = 1;
    left[0]=1;
    for(int i =0; i < n; i++){
       left[i] = left_result;
       left_result = left_result * nums[i];
    }

    int right_result =1;
    for(int i = n-1; i>= 0; i--){
        right[i]= right_result;
        right_result = right_result * nums[i];
    }


    for(int i =0; i<n; i++){
        result[i]= right[i]*left[i];
    }
    
    return result ;
    }
};
