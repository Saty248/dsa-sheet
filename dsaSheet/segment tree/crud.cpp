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

void display(Node* node){
  string str;
    if(node==NULL){
        return;
    }
    if(node->left!=NULL){
        str=str+"interval=[" + to_string(node->left->startInt)+"-"+to_string(node->left->endInt)+"] and data = "+to_string(node->left->sum)+"+ =>" ;
    }else{
        str=str+"no left child";
    }
str=str+"interval=[" + to_string(node->startInt)+"-"+to_string(node->endInt)+"] and data = "+to_string(node->sum)+"+ <= " ;


if(node->right!=NULL){
        str=str+"interval=[" + to_string(node->right->startInt)+"-"+to_string(node->right->endInt)+"] and data = "+to_string(node->right->sum) ;
    }else{
        str=str+"no right child";
    }
    cout<<str<<endl;

    if(node->left!=NULL){
        display(node->left);

    }
    if(node->right!=NULL){
        display(node->right);
    }
}

//query
int query(Node* node,int s,int e){
if(node->startInt>=s && node->endInt<=e){
    return node->sum;
}else if(node->startInt>e || node->endInt<s){
    return 0;
}else{
    return query(node->left,s,e)+query(node->right,s,e);
}
}

//update
int update(Node* node,int idx,int val){
    if(idx>=node->startInt && idx<=node->endInt){
        if(idx==node->startInt && idx==node->endInt){
            node->sum=val;
            return node->sum;
        }else{
                int leftAns=update(node->left,idx,val);
                int rightAns=update(node->right,idx,val);
                node->sum=leftAns+rightAns;
                return node->sum;
        }
    }
    return node->sum;
}

int main()
{
    fastio;
    vector<int> arr={3,8,6,7,-2,-8,4,9};
    Node* treeRoot=create(arr,0,arr.size()-1);
    
    cout<<query(treeRoot,1,6);
    return 0;
}