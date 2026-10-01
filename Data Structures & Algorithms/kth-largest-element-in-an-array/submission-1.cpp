class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> min_heap;
         int result;

        for(int n:nums){
            if(min_heap.size()==k){
                if(min_heap.top()<n){
                    min_heap.pop();
                    min_heap.push(n);
                }
            }

            else{
                min_heap.push(n);
            }
        }

        return result = min_heap.top();
        

        
        
    }
};
