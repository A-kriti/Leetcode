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
class cmp{
    public:
    bool operator()(ListNode* a, ListNode* b){
        return a->val>b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        //priority_queue<ListNode*,vector<ListNode*>,greater<ListNode*>>p;
        priority_queue<ListNode*,vector<ListNode*>,cmp>p;
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=NULL){
                p.push(lists[i]);
            }
        }
        //!p.empty()
        while(p.size()){
            ListNode* temp=p.top();
            curr->next=temp;
            curr=temp;
            p.pop();
            if(temp->next!=NULL)p.push(temp->next);
        }
        
        return dummy->next;
    }
};