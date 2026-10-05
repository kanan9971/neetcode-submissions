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
    ListNode* reverseList(ListNode* head) {
        ListNode * temp = head;
        ListNode* help = head;
        while(head->next!= nullptr){
            head = head-> next;
            head-> next = temp; 
            cout << "hi";<endl
        }
        head->next = temp;
        help-> next= nullptr;

        return head;
    }
};
