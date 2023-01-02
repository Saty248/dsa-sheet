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

pair<vector<vector<int>>

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