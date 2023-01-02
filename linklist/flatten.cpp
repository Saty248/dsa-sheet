#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class Node {
    public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
     Node(int val){
    this->val=val;
    next=NULL;
}
Node(int val1,Node *next1){
    val=val1;
    next=next1;
}
};
Node* addChild(Node* &h1,Node* &h2){
    Node* curr=h1->child;
    while(curr->next!=NULL){ 
        if(curr->child!=NULL){
                curr=addChild(curr,curr->next);
            }
        curr=curr->next;
    }
    h1->next=h1->child;
    h1->child->prev=h1;
    h1->child=NULL;
    curr->next=h2;
    h2->prev=curr;
    return curr;
}
 Node* flatten(Node* head) {
        Node* curr=head;
        while(curr!=NULL){
            if(curr->child!=NULL){
                curr=addChild(curr,curr->next);
            }
            curr=curr->next;
        }
        return head;

    }
int main()
{
    fastio;
    
    return 0;
}