
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


void treeToDll(Node* root,Node* head,
Node* prev){
    cout<<"enter";
    if(root==NULL){
        return;
    }
    treeToDll(root->left,head,prev);
    if(prev==NULL){
        head=root;
    } else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    treeToDll(root->right,head,prev);

}
int main()
{
    fastio;
    Node* head=NULL;
Node* prev1=NULL;
      Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    treeToDll(root,head,prev1);

    /* Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val;
        temp=temp->right;
    } */
    cout<<head->val;

    return 0;
}