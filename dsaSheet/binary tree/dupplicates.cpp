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

string InorderMapping(Node* root,unordered_map<string,int> &m){

    if(root==NULL){
        return "";
    }
    string str1="(";

    str1+=InorderMapping(root->left,m);
    str1+=to_string(root->val);
    str1+=InorderMapping(root->right,m);
    str1+=")";
    m[str1]++;
    cout<<root->val<<"->"<<str1<<endl;
    return str1;


}



int main()
{
    fastio;
     Node* root=new Node(8);
    root->left=new Node(3);
     root->right=new Node(10); 
    root->left->left=new Node(1);
     root->right->left=new Node(6);
    root->right->right=new Node(14);
     root->right->right->left=new Node(13);
    root->right->left->left=new Node(4);
    root->right->left->right=new Node(7); 
    unordered_map<string,int> m;
   cout<<InorderMapping(root,m);
    return 0;
}