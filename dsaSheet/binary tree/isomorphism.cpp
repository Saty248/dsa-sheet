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

bool iso(Node* root1,Node* root2){
    if(!root2 && !root2) return true;
    if((root1==NULL && root2!=NULL) || (root1!=NULL && root2==NULL)) return false;
    if(root1->val!=root2->val) return false;
    bool a,b;
    a=iso(root1->left,root2->left)&& iso(root1->right,root2->right);
    b=iso(root1->left,root2->right)&& iso(root1->right,root2->left);
    return a || b; 
}

int main()
{
    fastio;
     Node* root1=new Node(50);
    root1->left=new Node(20);
    root1->right=new Node(30);
    root1->left->left=new Node(10);
     root1->left->right=new Node(10);
    Node* root2=new Node(50);
    root2->left=new Node(20);
    root2->right=new Node(30);
    root2->left->left=new Node(10);
     root2->left->right=new Node(10);
    
     
     bool ans=iso(root1,root2);
    


        cout<<ans<<endl;
    
    return 0;
}