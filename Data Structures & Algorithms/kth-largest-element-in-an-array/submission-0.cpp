class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> max_heap;
         int result;
        for(int n : nums){
            max_heap.push(n);
        }
        
        for(int i =0; i <k; i ++){
            result = max_heap.top();
            max_heap.pop();
        }

        return result;
    }
};
