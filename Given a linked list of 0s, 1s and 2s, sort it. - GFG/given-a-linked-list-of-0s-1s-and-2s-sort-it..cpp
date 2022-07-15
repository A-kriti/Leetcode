// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


 // } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node * x=new Node(-1);
        Node * x1=x;
        Node * y=new Node(-1);
        Node * y1=y;
        Node * z=new Node(-1);
        Node * z1=z;
        Node * curr=head;
        
        if(curr->next==NULL)return curr;
        
        Node * d=new Node(-1);
        Node * ans=d;
        
        while(curr!=NULL){
            
            if(curr->data==0){
                x1->next=curr;
                x1=x1->next;
            }
            
            else if(curr->data==1){
                y1->next=curr;
                y1=y1->next;
            }
            
            else {
                z1->next=curr;
                z1=z1->next;
            }
            
            curr=curr->next;
        }
        
        z1->next=NULL;
        y1->next=z->next;
        x1->next=y->next;
        ans->next=x->next;
        
        return d->next;
        
    }
};


// { Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}  // } Driver Code Ends