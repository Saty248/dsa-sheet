#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

class Node{
    public:
    int sum,endInt,startInt;
    Node* left;Node* right;


  Node(int startInterval,int endInterval){
    startInt=startInterval;
   endInt=endInterval;

}
};

Node* create(vector<int> &arr,int start,int end){
if(start==end){
    Node* leaf=new Node(start,end);
    leaf->sum=arr[start];
    return leaf;
}

Node* node=new Node(start,end);

int mid=(start+end)/2;
node->left=create(arr,start,mid);
node->right=create(arr,mid+1,end);
node->sum=node->left->sum+ node->right->sum;
return node;
}

int main()
{
    fastio;
    vector<int> arr={3,8,6,7,-2,-8,4,9};
    Node* treeRoot=create(arr,0,7);
    
    return 0;
}