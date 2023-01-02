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

Node* delNode(Node* root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->val==val){
        if(!root->left && !root->right){
            delete root;
            return NULL;
        }

        else if(root->left && root->right){
            int mini=findMin(root->right);
            root->val=mini;
            root->right=delNode(root->right,mini);
            return root;
        }
        else if(root->left && !root->right){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node* temp=root->right;
            delete root;
            return temp;

        }
        
        }
        else if(root->val<val){
            root->right= delNode(root->right,val); }
            
        else{
            root->left= delNode(root->left,val); }    

        return root;

        
        
        
}

void inor(Node* root){
    if(root==NULL){
        return;
    }
    inor(root->left);
    cout<<root->val<<" ";
    inor(root->right);

}
void printInorder( Node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    cout << node->val << " ";
 
    /* now recur on right child */
    printInorder(node->right);
}

int main()
{
    fastio;
    //Node* root=NULL;
    //takeIn(root);

    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    root->right->right=new Node(7);
    cout<<findMin(root->left->right);
    /*  printInorder(delNode(root,3)); */

    return 0;
}