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

void findSuccPre(Node* root,Node*& pre,Node*& succ,int key){
    if(root==NULL){
        return;
    }
    else if(key>root->val){
        pre=root;
        findSuccPre(root->right,pre,succ,key);
    }
    else if(key<root->val){
        succ=root;
        findSuccPre(root->left,pre,succ,key);
    }
    else{
        Node* temp1=root->left;
        while(temp1!=NULL){
            pre=temp1;
            temp1->right;
        }
        Node* temp2=root->right;
        while(temp2!=NULL){
            succ=temp2;
            temp2->left;
        }
    }

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
    

    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    root->right->right=new Node(7);
    
      printInorder(root); 
      Node* pre1;
      Node* succ;

        findSuccPre(root,pre1,succ,3);


    return 0;
}