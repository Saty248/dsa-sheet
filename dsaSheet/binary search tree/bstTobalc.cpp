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

Node* balc(vector<int> inor,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;
    Node* root=new Node(inor[mid]);
    root->right=balc(inor,mid+1,e);
    root->left=balc(inor,s,mid-1);
    return root;
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
    
    printInorder(root,inor);
    sort(inor.begin(),inor.end());
    Node* root1=balc(inor,0,size(inor)-1);



    return 0;
}