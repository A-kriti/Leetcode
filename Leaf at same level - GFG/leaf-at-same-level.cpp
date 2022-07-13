// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    //unordered_map<int,int>m;
    int c=-1;
    int x=1;
    void height(Node * root,int l){
        
        if(!root)return;
        
        if(root->left==NULL && root ->right==NULL){
            //m[l]++;
            if(c==-1)c=l;
            else if(c!=l)x=0;
            
            return;
        }
        
        //l=max(height(root->left,l+1),height(root->right,l+1))+1;
        height(root->left,l+1);
        height(root->right,l+1);

        //return l;
        
    }
    
    bool check(Node *root)
    {
        //Your code here
        // if(!root)return 1;
        
        // //if(!root->left && root->right || root->left && !root->right)return 0;
        // int l=height(root->left);
        // int r=height(root->right);
        
        // //if(l!=r)return 0;
        
        // return abs(l-r)==0 && check(root->left) && check(root->right);
        height(root,1);
        //return (m.size()==1);
        return x;
        
    }
    
    // bool check(Node *root)
    // {
    //     //Your code here
    //     if(!root)return 1;
        
    //     if(!root->left && root->right || root->left && !root->right)return 0;
        
    //     return check(root->left) && check(root->right);
    // }
};

// { Driver Code Starts.
// Driver program to test size function
int main()
{
    int t;
    cin>> t;
    getchar();
    while (t--)
    {
        string s;
        getline( cin, s );
        Node* head = buildTree( s );
        Solution obj;
        cout << obj.check(head) << endl;
    }
    return 0;
}
  // } Driver Code Ends