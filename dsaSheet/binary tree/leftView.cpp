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

vector<int> leftView(Node *root){
    
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    ans.push_back(root->val);

    vector<int> ansbel=leftView(root->left);
    for(auto val:ansbel){
        ans.push_back(val);
    }
    return ans;
}

int main()
{
    fastio;
    // code goes here
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(60);

    vector<int> ans=leftView(root);
    

for(auto val:ans){
        cout<<val<<" ";
    }
    
    return 0;
}