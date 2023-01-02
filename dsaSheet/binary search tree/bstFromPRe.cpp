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
int  findMax(vector<int> &pre,int s,int e){
    int maxi=pre[s], idx=s;

    for(int i=s;i<=e;i++){
        if(pre[i]>maxi){
            idx=i;
            return idx;
        }
    }

    return idx;


}


Node* makepre(vector<int> &pre,int s,int e){
    if(s>e ){
        return NULL;
    }
   
    Node* root=new Node(pre[s]);
     if(s==e){
        return root;
    }
int maxi=findMax(pre,s,e);
if(pre[maxi]>pre[s])
    root->right=makepre(pre,maxi,e);

root->left=makepre(pre,s+1,maxi-1);
return root;

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
    vector<int> pre={10,5,1,7,40,50};
    int s=pre.size()-1;
    

    Node* root=makepre(pre,0,s);
    printInorder(root);
    return 0;

}