class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       // so no hashmap as o(1)-> two pointer
       int left = 0;
       int n = numbers.size();
       int right = n-1;
       

       vector<int> res (2);
       while(left<right){
        if((numbers[left]+numbers[right])== target ){
            res[0] = left+1;
            res[1] = right+1;
            break;
        }
        if((numbers[left]+numbers[right])< target){
            left++;
        }
        if((numbers[left]+numbers[right])>target){ 
            right--;

        }

        

        

       }

       return res;
        


    }
};
