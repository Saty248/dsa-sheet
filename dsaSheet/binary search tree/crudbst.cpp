#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

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


Node* insert(Node* root,int n1){
if(root==NULL){
    Node* nn=new Node(n1);
    return nn;
}
if(root->val>n1){
    root->left= insert(root->left,n1);
}
else {
    root->right=insert(root->right,n1);
}
return root;
}

int main()
{
    fastio;


    // code goes here
    return 0;
}