class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < (int)nums.size() - 2; i++) {
            // Skip duplicate first elements.
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int mid = i + 1;
            int right = nums.size() - 1;

            while (mid < right) {
                int sum = nums[i] + nums[mid] + nums[right];

                if (sum < 0) {
                    mid++;
                } 
                else if (sum > 0) {
                    right--;
                } 
                else {
                    result.push_back({nums[i], nums[mid], nums[right]});

                    // Move away from the pair just used.
                    mid++;
                    right--;

                    // Skip duplicate second elements.
                    while (mid < right && nums[mid] == nums[mid - 1]) {
                        mid++;
                    }

                    // Skip duplicate third elements.
                    while (mid < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};