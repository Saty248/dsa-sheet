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
    Node* next;
    Node(int val){
        this->val=val;
        left=right=next=NULL;
    }
};
void solve(Node* root,Node* par){
    if(!root) return;

    solve(root->left,root);
    solve(root->right,par);

    if(root->right){
        root->next=root->right;
    }else{
        root->next=par;
    }

}

void treeTobst(Node* root,vector<int> &in,int &i){
    if(root==NULL){
        return;
    }
    treeTobst(root->left,in,i);
    root->val=in[i];
    i++;
     treeTobst(root->right,in,i);

}

void printInorder( Node* node,vector<int> &inor)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left,inor);
 
    /* then print the data of node */
   inor.push_back(node->val);
 
    /* now recur on right child */
    printInorder(node->right,inor);
}
void printInorder( Node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
   cout<<node->val<<" ";
 
    /* now recur on right child */
    printInorder(node->right);
}

int main()
{
    fastio;
    

    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(8);
    root->right->right=new Node(7);
        
    vector<int> inor;
    vector<int> inor2;
    printInorder(root,inor);
    inor2=inor;
    sort(inor2.begin(),inor2.end());
      //cout<<root->right->right->next->val;
      int i=0;
    treeTobst(root,inor2,i);
     printInorder(root);


    return 0;
}