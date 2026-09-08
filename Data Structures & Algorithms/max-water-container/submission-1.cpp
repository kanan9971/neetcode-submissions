class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left =0;
        int right = heights.size()-1;
        int max_volume =0;

        while(left < right){
            int length = right - left;
            int height = min(heights[left],heights[right]);
            int volume = length * height;

            max_volume = max(max_volume , volume);

            
            if(heights[left] < heights[right]){
                    left++;
                }

            else {
                    right--;
                }
            
            

        }


        return max_volume;
    
    }
};
