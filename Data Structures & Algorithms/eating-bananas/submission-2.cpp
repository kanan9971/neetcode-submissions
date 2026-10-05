class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());

        int n = piles.size();

        if(h==n){
            return piles[n-1];

        }

        
        int rate = piles[n/2]-1;
        return rate;
    }
};
