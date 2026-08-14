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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* size = head;
        int counter = 0;
       if(head == nullptr){
        return head;
       }
       
        while(size!=nullptr){
            size=size->next;
            counter++;
        }
        if(counter == 1){
            head =nullptr;
        }

        
        else if(counter -n != 0){
            
            ListNode *prev = head;
            ListNode *temp = head->next;
            for(int i =1; i< counter-n;i++){
            temp = temp->next;
            prev = prev->next;
            }

            prev->next = temp->next;
            temp->next = nullptr;
            temp = nullptr;

        }

        else{
            head = head->next;
        }

        return head;



    }
};
