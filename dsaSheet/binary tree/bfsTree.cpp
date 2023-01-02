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

 vector<pair<int,int>> bfs(Node* root){
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
            q.push({fst.first->right,fst.second+1});
        }

    }
    return ans;

}

int main()
{
    fastio;
    // code goes here
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(60);

     vector<pair<int,int>> ans=bfs(root);
    

for(auto val:ans){
        cout<<val.first<<" "<<val.second<<endl;
    }
    
    return 0;
}