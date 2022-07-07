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
    bool hasCycle(ListNode *head) {
        
        map<ListNode *,int>m;
        ListNode *curr=head;
        
        while(curr!=NULL){
            
            if(!m[curr]){
                m[curr]++;
                curr=curr->next;
                
            }
            
            else{
                return true;    
            }
        }
        
        return false;
    }
};