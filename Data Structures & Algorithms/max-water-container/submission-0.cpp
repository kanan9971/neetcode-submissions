class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int max = 0;
        while(left < right){
            int smaller =(heights[left]<heights[right])? heights[left]:heights[right];
            int distance = right-left;
            int volume = smaller * distance;
            if(volume >max){
                max = volume;
            }

            if(heights[left] == smaller){
                left++;
            }

            else if(heights[right] == smaller){
                right--;
            }
            
        }
        return max;
    }
};
