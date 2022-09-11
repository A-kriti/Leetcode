// ques - https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1

bool check(Node *root,int min,int max){
    
    if(!root)return false;
    if(min==max)return true;
    
    return check(root->left,min,root->data-1) || check(root->right,root->data+1,max);
}

bool isDeadEnd(Node *root)
{
    //Your code here
    return check(root,1,INT_MAX);
}
