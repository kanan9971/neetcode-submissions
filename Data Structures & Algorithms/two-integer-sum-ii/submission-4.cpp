class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0; 
        int right = left + 1;
        vector <int> result (2);
        
        while(left < numbers.size()-1){
       int sum =  numbers[left] + numbers[right];

        if(sum == target ){
            result[0] = left+1;
            result[1] = (right + 1);
        }
        if( right== (numbers.size()-1)){
            left++;
        }
        else {
            right ++;
        }
        
        }

        return result; 
    }
};
