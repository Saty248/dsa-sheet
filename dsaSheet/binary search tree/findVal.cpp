#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=right=NULL;
    }
};

Node* InsBst(Node* root,int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    if(val>root->val){
        root->right=InsBst(root->right,val);
    }else{
        root->left=InsBst(root->left,val);
    }
    return root;

}
void takeIn(Node* &root){
    int val;
    cin>> val;
    while(val!=-1){
        root=InsBst(root,val);
        cin>>val;
    }

}

bool find(Node* root,int val){
    if(root==NULL){
        return false;
    }
    else if(root->val==val){
        return true;
    }
    else if(root->val>val){
        return find(root->left,val);
    }
    else{
        return find(root->right,val);
    }

}
int main()
{
    fastio;
    //Node* root=NULL;
    //takeIn(root);

    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);

    cout<<find(root,67);
    return 0;
}