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
        int index =-1;
      set <ListNode*> seen ;
        while(head!= nullptr){
            if(seen.count(head)){
                return true;
            }
            seen.insert(head);
            head=head->next;
        }
        return false;
    }
};
