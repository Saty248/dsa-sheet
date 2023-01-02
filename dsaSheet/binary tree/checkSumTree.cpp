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


bool checkst(Node* root){
    if(root->left==NULL && root->right==NULL){
        
        return true;
    }
    if(checkst(root->left) && checkst(root->right)){
        int cv= root->left->val+root->right->val;
        if(root->val==cv){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }

}

int main()
{
    fastio;
     Node* root=new Node(50);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(10);
     root->left->right=new Node(10);
    
     
     bool ans=checkst(root);
    


        cout<<ans<<endl;
    
    return 0;
}