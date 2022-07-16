void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
       
        if (head == NULL) return;
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)break;
        }
        
        if(fast==head && slow==head){
            while(slow->next!=fast)
            slow=slow->next ;
            slow->next=NULL ;
            return ;
        }
        
        if(slow==fast){
            fast=head;
            while(slow->next!=fast->next){
                slow=slow->next;
                fast=fast->next;
            }
            
            slow->next=NULL;
        }
        
    }
