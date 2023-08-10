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
int target=8;
int solve(Node* root,int &k){
    if(!root){
        return -1;
    }

    int left=solve(root,k);
    if(k==0 || target==left){
        return root->val==target?root->val:left;
    }
    int right=solve(root,k);
    if(k==0){
        return root->val==target?root->val:max(left,right);
    }
    if(target==root->val){
        k--;
        return target;
    }
    if(target==max(left,right)){
        k--;
        return target;
    }
    return -1;

}



int main()
{
    fastio;
     Node* root=new Node(1);
    root->left=new Node(2);
     root->right=new Node(3); 
    root->left->left=new Node(4);
     root->right->left=new Node(5);
    root->right->right=new Node(6);
     root->right->right->left=new Node(9);
    root->right->left->left=new Node(7);
    root->right->left->right=new Node(8); 
    
    int k=3;
   int ans=solve(root,k);
   if(ans==target){
    cout<<-1;
   }else{
    cout<<ans;
   }
    return 0;
}