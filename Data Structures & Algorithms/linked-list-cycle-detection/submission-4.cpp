/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(slow!= nullptr){
            slow=slow->next;
            for(int i = 0;i<2;i++){
                fast = fast->next;
                if(fast==nullptr){
                    return false;
                }
            }
            if(slow == fast){
                return true;
            }
            
        }
        return false;
    }
};
