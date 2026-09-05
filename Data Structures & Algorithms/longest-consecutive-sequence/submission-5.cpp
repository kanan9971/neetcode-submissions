class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int counter =1;
        int temp = 1; 

        sort(nums.begin(),nums.end());

        for(int i =0; i< nums.size()-1;i++){
            if(nums.empty()){
                return 0;
            }
            
            if(nums[i]==nums[i+1]){
                continue;
            }
            
            if(nums[i+1] - nums[i] ==  1){
                temp ++; 

                if(temp > counter ){
                    counter = temp;
                }


            }

          else if(nums[i+1] - nums[i]!= 1){
                temp =1; 
            }


        }
        
        return counter;



        
    }
};
