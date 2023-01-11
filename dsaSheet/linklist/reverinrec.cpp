#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class Node {
    public:
    int val;
    Node* next=NULL;
    Node(int val){
        this->val=val;
        next=NULL;
    }
    Node (int val,Node* next){
        this->val=val;
        this->next=next;
    }
};
void insHead(Node* &head,int val){
    Node* n1=new Node(val);
    if (head==NULL){
        head=n1;
    }
    else{
        n1->next=head;
        head=n1;

    }
}
void insTail(Node* &head,int val){
    Node* n1=new Node(val);
    if (head==NULL){
        head=n1;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n1;
    }
}
void display(Node* head){
    Node* temp=head;
    while(head!=NULL){
        cout<<head->val<<"  ";
        cout<<temp->val<<"  ";
        head=head->next;
    }
    cout<<"NULL" <<endl;

}

Node* rev(Node* curr,Node* prev){

    if(curr==NULL){
        return NULL;
    }
    else if(curr->next==NULL){
        curr->next=prev;
        return curr;
    }
    else{
        Node* temp=curr->next;
        curr->next=prev;
        return rev(temp,curr);
    }
}

int main()
{
    fastio;
    Node* head=NULL;
    
     insHead(head,1);
    insTail(head,2);
    insTail(head,3);
    insTail(head,4);
    insTail(head,5);
    display(head);
    display(rev(head,NULL));
    
    return 0;
}