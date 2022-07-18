/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
//         unordered_map<ListNode*,int>m;
        
//         while(head){
            
//             if(!m[head]){
//                 m[head]=1;
//                 head=head->next;
//             }
            
//             else{
//                 return head;
//             }
//         }
//         return head;
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break;
        }
        
        if(fast==NULL || fast->next==NULL)return NULL;
        
        ListNode* ptr1=head;
        ListNode* ptr2=slow;
        
        while(ptr1!=ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        
        return ptr1;   
    }
};


