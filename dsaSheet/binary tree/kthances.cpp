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
Node* lca(Node* root,int n1,int &k){
    if(root==NULL){
        return NULL;
    }
    if(root->val==n1){
        return root;

    }
    
    

    Node* ans1;
    Node* ans2;
    
     ans1=lca(root->left, n1, k);

   
     ans2=lca(root->right, n1, k);

    
     if(ans1!=NULL && ans2==NULL){
        k--;
        if(k==0){
        return root;
        }
        return ans1;
    }
    
     if(ans1==NULL && ans2!=NULL){
       
        k--;
        if(k==0){
        return root;}
        return ans2;
    }
    else{
        return NULL;
    }
    


    
}

int main()
{
    fastio;
     Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
     root->left->right=new Node(5);
    
     int n1=4,n2=2;
     Node* ans1=lca(root,n1,n2);
    
    cout<<ans1->val;

    
    return 0;
}