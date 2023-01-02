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
int sumTree(Node* root){
    if(root->left==NULL && root->right==NULL){
        int cv= root->val;
        root->val=0;
        return cv;
    }
    int ans,sum1,sum2,sum3;
    if(root->left){
         sum1=sumTree(root->left);
    }
    if(root->right){
         sum2=sumTree(root->right);
    }
     sum3=root->val;
    root->val=sum1+sum2;
    return(sum1+sum2+sum3);
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
     
     int ans=sumTree(root);
    


        cout<<ans<<endl;
    
    return 0;
}