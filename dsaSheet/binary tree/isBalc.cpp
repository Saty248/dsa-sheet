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

pair<bool,int> isbalc(Node* root){
    if(root==NULL){
        return {true,0};
    }

    pair<bool,int> left=isbalc(root->left);
    pair<bool,int> right=isbalc(root->right);

    pair<bool,int> ans;
    if(left.first && right.first && abs(left.second-right.second)<=1){
        ans.first=true;

    }else{
        ans.first=false;
    }
    ans.second=max(left.second,right.second)+1;

    return ans;


}

int main()
{
    fastio;
    // code goes here
    Node* root=new Node(8);
    root->left=new Node(3);
    /* root->right=new Node(10); */
    root->left->left=new Node(1);
    /* root->right->left=new Node(6);
    root->right->right=new Node(14);
     root->right->right->left=new Node(13);
    root->right->left->left=new Node(4);
    root->right->left->right=new Node(7); */
     pair<bool,int> ans=isbalc(root);
    


        cout<<ans.first<<endl;
    
    
    return 0;
}