class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int left = 0;
        int right = left + 1;
        while(right < prices.size()){
            int profit = prices[right]- prices[left];
            if(profit < 0){
                left++;
            }

            else {
                right++;
                if(profit> max){
                    max = profit;
                }

            }
        }
        return max;
    }
};
