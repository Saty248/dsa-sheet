#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class Node{

    public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val=val;
        left=right=NULL;
    }

};
void morrisIn(Node* root){
    if(root==NULL){
        return;
    }
    Node* current=root;
    Node* pre;
while(current!=NULL){
    if(current->left==NULL){
        cout<<current->val<<" ";
        current=current->right;
    }else{
        pre=current->left;
        while(pre->right!=NULL && pre->right!=current)
            pre=pre->right;
            
        if(pre->right==NULL){
            
        pre->right=current;
        current=current->left;
        }
        else{
            pre->right=NULL;
            cout<<current->val<<" ";
            current=current->right;

        }


    }

    
    }


}
void morrispre(Node* root){
    if(root==NULL){
        return;
    }
    Node* current=root;
    Node* pre;
while(current!=NULL){
    if(current->left==NULL){
        cout<<current->val<<" ";
        current=current->right;
    }else{
        pre=current->left;
        while(pre->right!=NULL && pre->right!=current)
            pre=pre->right;
            
        if(pre->right==NULL){
            
        pre->right=current;
        current=current->left;
        }
        else{
            pre->right=NULL;
            
            current=current->right;

        }


    }

    
    }


}


int main()
{
    fastio;
     Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    morrisIn(root);
    return 0;
}