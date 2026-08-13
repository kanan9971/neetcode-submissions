class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp  = list1;
        ListNode* temp2 = list2;
        ListNode* new_list = nullptr;
        ListNode* tail = nullptr;   // ADDED: follows the end of the list you're building

        while (temp != nullptr && temp2 != nullptr) {
            ListNode* node = new ListNode(min(temp->val, temp2->val));

            if (new_list == nullptr) {
                new_list = node;
                tail = node;        // ADDED: first node is both head and tail
            }
            else {
                tail->next = node;  // FIXED: was new_list->next — that slot got
                tail = node;        // ADDED:  overwritten every iteration, losing nodes
            }

            if (temp->val <= temp2->val) {
                temp = temp->next;
            }
            else {
                temp2 = temp2->next;   // CHANGED: else-if -> else, no case can fall through
            }
        }

        // ADDED: one list still has nodes; the loop exited without adding them
        if (tail == nullptr) return temp ? temp : temp2;   // loop never ran (an input was empty)
        tail->next = temp ? temp : temp2;                  // attach whatever remains

        return new_list;
    }
};