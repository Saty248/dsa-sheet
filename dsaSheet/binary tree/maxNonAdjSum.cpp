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



int maxSum(Node* root){
    if(root== NULL){
        return 0;
    }
    if(!root->left && !root->right){
        return root->val;
    }
    int taken=root->val;
    if(root->left){
        taken+=maxSum(root->left->left)+maxSum(root->left->right);
    }
    if(root->right){
        taken+=maxSum(root->right->left)+maxSum(root->right->right);
    }
   
    int notTaken=maxSum(root->left)+maxSum(root->right);
    int ans=max(taken,notTaken);
    return ans;
}

int main()
{
    fastio;
     Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
     root->left->right=new Node(5);
    
     int ans=maxSum(root);
     cout<<ans;
    
    


    return 0;
}