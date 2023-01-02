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

bool solve(Node* root,set<int> &s){
    if(root==NULL){
        return false;
    }
    int s1,s2;
    s1=root->val-1;
    s2=root->val+1;
    if(s1<=0){
        if(s.find(s2)==s.end()){
            s.insert(root->val);
        bool a=solve(root->left,s);
        bool b=solve(root->right,s);
        return a|b;
        }else{
            return true;
        }
    }

    else if(s.find((root->val)-1)==s.end() ||s.find((root->val)+1)==s.end()){
        s.insert(root->val);
        bool a=solve(root->left,s);
        bool b=solve(root->right,s);
        return a|b;
    }
    else{
        return false;
    }
    
}



int main()
{
    fastio;
    

    Node* root=new Node(8);
    root->left=new Node(5);
    root->right=new Node(9);
    root->left->left=new Node(2);
    root->left->right=new Node(7);
    root->left->left->left=new Node(1);
    
     set<int> s;
    cout<<solve(root,s);

    return 0;
}