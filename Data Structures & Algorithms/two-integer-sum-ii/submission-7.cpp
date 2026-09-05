class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; 
        int right = numbers.size()-1;
        vector <int> result (2);
        
        while(left < right){
       int sum =  numbers[left] + numbers[right];

        if(sum == target ){
            result[0] = left+1;
            result[1] = (right + 1);
            return result; 
        }

        if(sum< target){
            left++;
        }

        if(sum > target )
            right --;
        
        }

        return result; 
    }
};
