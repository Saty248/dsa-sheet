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



void printInorder( Node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    int a=node->next!=NULL?node->next->val:-1;
    cout << node->val << " "<<a<<endl;
 
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
    root->left->right=new Node(4);
    root->right->right=new Node(7);
        solve(root,NULL);
      printInorder(root); 


      //cout<<root->right->right->next->val;

     


    return 0;
}