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
        left=NULL;
        right=NULL;
    }

    
};

 void mirror(Node* root,Node** root1){
    if(root==NULL){
    root1=NULL;
    return ;

    }
*root1=new Node(root->val);
mirror(root->left,&((*root1)->right));
mirror(root->right,&((*root1)->left));
} 
void inorder(Node* root){

    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val;
    inorder(root->right);


}
int main()
{
    fastio;
    // code goes here
    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    Node* root1;
    mirror(root,&root1);
    inorder(root1);
    return 0;
}