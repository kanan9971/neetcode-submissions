class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int counter = 0;              
        int n = nums.size();
        unordered_map<int,int> mp;    

        for(int i = 0; i < n; i++){
            int next = nums[i]-1;
            int prev = nums[i]+1;

            if(mp.count(nums[i])) continue;   // skip duplicates

            int left = 0;
            if(mp.count(next)) left = mp[next];

            int right = 0;
            if(mp.count(prev)) right = mp[prev];

            int total = left + right + 1;     // +1 counts myself, fixes the off-by-one

            mp[nums[i]] = total;
            mp[nums[i] - left]  = total;      // update far left end
            mp[nums[i] + right] = total;      // update far right end

            counter = max(counter, total);    // max, not sum
        }
        return counter;
    }
};