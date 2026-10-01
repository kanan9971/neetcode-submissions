class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> max_heap;
        for(int n : stones){
            max_heap.push(n);
        }

        while(max_heap.size() > 1) {        // added { to open the loop body
            int x = max_heap.top();
            max_heap.pop();
            int y = max_heap.top();
            max_heap.pop();                 // you were missing this pop
            if(y < x) {
                x -= y;
                max_heap.push(x);
            }
        }                                   // added } to close the loop body

        return max_heap.empty() ? 0 : max_heap.top();  // guard: heap can be empty
    }
};