class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       // so no hashmap as o(1)-> two pointer
       int left = 0;
       int right = 1;
       int n = numbers.size();
       vector<int> res (2);
       while(left!= (n-1)){
        if((numbers[left]+numbers[right])== target ){
            res[0] = left+1;
            res[1] = right+1;
        }
        if(right == (n-1)){
            left++;
            right = left + 1;
        }
        else {
            right++;
        }

        

       }

       return res;
        


    }
};
