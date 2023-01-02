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
Node* lca(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->val==n1 || root->val==n2){
        return root;

    }
    
    

    Node* ans1;
    Node* ans2;
    
     ans1=lca(root->left, n1, n2);

   
     ans2=lca(root->right, n1, n2);

    if(ans1!=NULL && ans2!=NULL){
        
        return root ;
    }
    else if(ans1!=NULL && ans2==NULL){
        
        return ans1;
    }
    
    else if(ans1==NULL && ans2!=NULL){
       
        return ans2;
    }
    else{
        return NULL;
    }
    


    
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
   
     int n1=7,n2=5;
     Node* ans1=lca(root,n1,n2);
    
    cout<<ans1->val;

    
    return 0;
}