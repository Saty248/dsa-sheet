#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=right=NULL;
    }
};
int target=8;
int solve(Node* root,Node* n1,Node* n2){
    if(root==NULL){
        return -1;
    }
    if(root->val==n1->val){
        return root->val;
    }
    if(root->val==n2->val){
        return root->val;
    }
    int left=solve(root->left,n1,n2);
    int right=solve(root->right,n1,n2);
    if(left!=-1 && right !=-1){
        if((left==n1->val && right==n2->val)  || (left==n2->val && right==n1->val)){
            return root->val;
        }
    }else if(left!=-1 && right ==-1){
        return left;
    }else if(left==-1 && right !=-1){
        return right;
    }else{
        return -1;
    }
return -1;
}


int main()
{
    fastio;
     Node* root=new Node(1);
    root->left=new Node(2);
     root->right=new Node(3); 
    root->left->left=new Node(4);
     root->right->left=new Node(5);
    root->right->right=new Node(6);
     root->right->right->left=new Node(9);
    root->right->left->left=new Node(7);
    root->right->left->right=new Node(8); 
    
   
   int ans=solve(root,root->right->left,root->left);
  cout<<ans<<endl;
    return 0;
}