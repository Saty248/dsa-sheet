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
int findPos(int in[],int element,int n){
    for(int i=0;i<n;i++){
        if(in[i]==element){
            return i;
        }
        
    }return -1;
}
Node* solve(int in[],int pre[],int i,int n,int ins,int ine){
    if(i>=n|| ins>ine){
        return NULL;
    }
    int ele=pre[i];
    Node* root=new Node(ele);
    int pos=findPos(in,ele,n);
    root->left=solve(in,pre,i+1,n,ins,pos-1);
    root->right=solve(in,pre,i+1,n,pos+1,ine);
    return root;
}
int main()
{
    fastio;
     Node* root=new Node(10);
    root->left=new Node(-2);
    root->right=new Node(6);
    root->left->left=new Node(8);
     root->left->right=new Node(-4);
    root->right->left=new Node(7);
    root->right->right=new Node(5);
     
    return 0;
}