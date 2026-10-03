class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left =0;
        int right =1;
        int profit =0;
        while(right < prices.size()){
            int val = prices[right]-prices[left];
            if(prices[left]>prices[right]){
                left=right;
                right++;
            }

            else {
                profit = max(profit,val );
                right++;
            }
        }
        return profit;
    }
};
