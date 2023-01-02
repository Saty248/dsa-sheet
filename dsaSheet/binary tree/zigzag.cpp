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
   int k=1;
   stack<pair<int,int>> q2;
    while(!q.empty()){
        pair<Node*,int> fst=q.front();
        q.pop();
        
        if(fst.second%2==0){
            while(!q2.empty()){
                pair<int,int> cv=q2.top();
                q2.pop();

                ans.push_back({cv.first,cv.second});
            }
            ans.push_back({fst.first->val,fst.second});
        }
        
        
        if(fst.second%2!=0)
        {
            q2.push({fst.first->val,fst.second});
        }
            if(fst.first->left!=NULL){
            q.push({fst.first->left,fst.second+1});
        }
        if(fst.first->right!=NULL){
            q.push({fst.first->right,fst.second+1});
        }
        
        
        k++;

    }
    return ans;

}


vector<int> zigzag2(Node* root){
    vector<int> temp;
    bool lr=true;
    queue<Node* > q;
    q.push(root);

    while(!q.empty()){
    vector<int> ans(q.size());

        for(int i=0;i<q.size();i++){
            Node* cv=q.front();
            q.pop();
            int id=lr?i:q.size()-1-i;
            ans[i]=cv->val;
            if(cv->left){
                q.push(cv->left);
            }
            if(cv->right){
                q.push(cv->right);
            }
        }
        lr=!lr;
        for(auto i:ans){
            temp.push_back(i);
        }
    }
    return temp; 
    

}

int main()
{
    fastio;
    // code goes here
    Node* root=new Node(7);
    root->left=new Node(9);
    root->right=new Node(7);
    root->left->left=new Node(8);
    root->left->right=new Node(8);
       root->right->left=new Node(6);
        root->left->left->left=new Node(10);
         root->left->left->right=new Node(9);
     vector<int> ans=zigzag2(root);
    

for(auto val:ans){
        cout<<val<<endl;
    }
    
    return 0;
}