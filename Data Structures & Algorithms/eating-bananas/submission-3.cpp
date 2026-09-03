class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int speed = 0;
        
       
           int left = 1;
          int  right = *max_element(piles.begin(),piles.end());
          int answer = right;

           while(left <= right){
            long long hours = 0;
             int mid =  left + (right-left)/2;
                for(int i = 0;i <piles.size();i++){
                    hours += (piles[i]+mid -1)/mid;

                }
                if(hours <= h){
                    right = mid-1;
                    answer = mid;
                }

                else if(hours> h){
                    left = mid+1;
                }


           }

          return answer;
        
        
        
    }
};
