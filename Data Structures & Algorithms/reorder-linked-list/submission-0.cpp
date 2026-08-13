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
    void reorderList(ListNode* head) {
        ListNode *forward = head;
        ListNode *back = head;
        int counter = 0;
        while(back!=nullptr){
            back = back->next;
            counter++;

        }
        back = head;
        for(int i= 0; i<((counter+1)/2);i++){
            back = back->next;
            
        }
        
        
        ListNode* prev= nullptr;
        while(back!=nullptr){
            ListNode* temp = back->next;
            back->next = prev;
            prev = back;
            back = temp;
            
            
        }
        ListNode * num = head;
        for(int i =1; i<(counter+1)/2;i++){
            num = num->next;
        }
        num->next=nullptr;

        back = prev;
        
        while(back!=nullptr){
            ListNode* goat = forward->next;
            ListNode* nextBack = back->next;   // read before it gets clobbered
            forward->next = back;
            back->next = goat;
            forward = goat;
            back = nextBack;
            
            
            
            
        }

        

        
    }
};
