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
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* prev=NULL;
        ListNode* curr=head;
        int c=1;
        while(c<left){
            prev=curr;
            curr=curr->next;
            c++;
        }
        ListNode* start=curr;
        
        while(c<right){
            curr=curr->next;
            c++;
        }
        
        ListNode* rest=curr->next;
        curr->next=NULL;
        ListNode* rev=reverse(start);
        
        if(prev!=NULL)prev->next=rev;
        
        curr=rev; //store reverse linkedlist
        while(rev->next!=NULL){
            rev=rev->next;
        }
        
        rev->next=rest;
        
        if(left==1)return curr; //reversed likedlist from begining till right and add rest
        
        return head; //add prefix + reversed linked list + rest
        
    }
};