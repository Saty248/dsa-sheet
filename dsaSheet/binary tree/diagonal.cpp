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

 vector<pair<int,int>> dia1(Node* root){
    queue<pair<Node*,int>> q;
    vector<pair<int,int>> ans;
    q.push({root,0});
    while(!q.empty()){
        pair<Node*,int> fst=q.front();
        q.pop();
        ans.push_back({fst.first->val,fst.second});
        if(fst.first->left!=NULL){
            q.push({fst.first->left,fst.second+1});
        }
        if(fst.first->right!=NULL){
            q.push({fst.first->right,fst.second});
        }

    }
    return ans;

}
//do using temp and with out level
vector<int> dia2(Node* root){
queue<Node*> q;
    vector<int> ans;
    q.push(root);
    while(!q.empty()){

        Node* fst=q.front();
        q.pop();
        while(fst!=NULL){
            if(fst->left!=NULL){
            q.push(fst->left);
           
        }
         ans.push_back(fst->val);
            fst=fst->right;
        

        }

    


    }
    return ans;


}

int main()
{
    fastio;
    // code goes here
    Node* root=new Node(8);
    root->left=new Node(3);
    root->right=new Node(10);
    root->left->left=new Node(1);
    root->right->left=new Node(6);
    root->right->right=new Node(14);
     root->right->right->left=new Node(13);
    root->right->left->left=new Node(4);
    root->right->left->right=new Node(7);
     vector<int> ans=dia2(root);
    

for(auto val:ans){
        cout<<val<<endl;
    }
    
    return 0;
}