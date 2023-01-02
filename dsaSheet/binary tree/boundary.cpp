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
bool isleaf(Node* root){
    if(root==NULL){
        return true;
    }
    if(root->left!=NULL|| root->right!=NULL){
        return false;
    }else{
        return true;
    }

}
vector<int> left(Node* root){
    
    vector<int> ans;
    if(isleaf(root)){
        return ans;
    }
    ans.push_back(root->val);
     vector<int> ansbel;
if(root->left){
    ansbel=left(root->left);
}
    else{
       ansbel=left(root->left);
    }
    for(auto val:ansbel){
        ans.push_back(val);
    }
    return ans;
}

vector<int> leaf(Node* root){
    vector<int> ans;
    if(isleaf(root)){
        ans.push_back(root->val);
        return ans;
    }
     vector<int> ansbel;
     ansbel=leaf(root->left);
     for(auto val:ansbel){
        ans.push_back(val);
    }
    ansbel=leaf(root->right);
     for(auto val:ansbel){
        ans.push_back(val);
    }

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
     vector<int> ans=leaf(root);
    

for(auto val:ans){
        cout<<val<<" ";
    }
    return 0;
}