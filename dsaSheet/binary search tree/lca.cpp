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

int findMin(Node* root){
    while(root->left!=NULL){
        root=root->left;

    }
    return root->val;

}

int solve(Node* root,int n1,int n2){
    if(root==NULL){
        return -1;
    }
    else if((n1>root->val && n2<root->val) || (n1<root->val && n2>root->val)){
        return root->val;
    }else{
        if(n1>root->val){
            return solve(root->right,n1,n2);
        }else{
            return solve(root->left,n1,n2);
        }
    }
}



int main()
{
    fastio;
    

    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    root->right->right=new Node(7);
    
     
    cout<<solve(root,2,4);

    return 0;
}