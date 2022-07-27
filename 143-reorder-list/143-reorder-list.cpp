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
    
    ListNode* reverse(ListNode* head){
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=NULL;
        
        while(curr!=NULL){
            
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    void reorderList(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* t1=head->next;
        ListNode* head2=reverse(slow);
        ListNode* t2=head2->next;
        
        
        while(t1!=NULL && t2!=NULL){
            
            head->next=head2;
            head2->next=t1;
            head=t1;
            t1=t1->next;
            head2=t2;
            t2=t2->next;
        }
        
    }
};