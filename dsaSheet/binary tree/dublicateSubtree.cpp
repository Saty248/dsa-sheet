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
unordered_map<string,int> mp;

string solve(Node* root){
    
     if(root==NULL){
        return "";
    }
    string s="";
   
    
    s=s+to_string(root->val);
    s=s+solve(root->left);
    s=s+solve(root->right);
    mp[s]++;
    return s;  
}

int main()
{
    fastio;
     Node* root=new Node(10);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
     root->left->right=new Node(5);
    
    root->right->right=new Node(2);
    root->right->right->left=new Node(4);
    root->right->right->right=new Node(5);
     
    string ans=solve(root);
    
    
    

        for(auto x:mp){
            if(x.second>=2){
                cout<<x.first<<" ";
            }
        }
    
    return 0;
}