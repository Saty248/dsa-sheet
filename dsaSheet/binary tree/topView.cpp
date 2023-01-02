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

vector<int> topView(Node* root){
vector<int> ans;
if(root==NULL){
    return ans;
}
vector<int> ansbel=topView(root->left);

for(auto val:ansbel){
    ans.push_back(val);
}
ans.push_back(root->val);
return ans;


    
}

int main()
{
    fastio;
  
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(60);
    root->right->right=new Node(100);
    root->right->left=new Node(90);
     vector<int> ans=topView(root);
    for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}