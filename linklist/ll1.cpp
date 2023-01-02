#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val){
        data=val;
        next=NULL;
    }
};

void insertTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"  ";
        head=head->next;
    }
    cout<<"NULL" <<endl;


}
void insertHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void del(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->data==val || head->next==NULL){
        delete head;
    }
    node* temp=head;
    
    while(temp->next->data!=val){
        temp=temp->next;

        
    }
    node* deleteit=temp->next;
    temp->next=temp->next->next;
    delete deleteit;


}
node* revrec(node* &head){
    if(head->next==NULL || head==NULL){
        return head;
    }
   node* newhead=revrec(head->next);
   head->next->next=head;
   head->next=NULL;
   return newhead;
}
 node* revk(node* &head,int k){
     node* prev=NULL;
     node* curr=head;
     node* next;
     int c=0;
     while(c<k || curr==NULL){
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;
         c++;
     }
     if(next!=NULL){
         head->next=revk(next,k);
     }
     return prev;
 } 

int main(){
    node* head=NULL;
    insertTail(head,1);
    insertTail(head,3);
    insertHead(head,2);
    
    display(head);
    
    display(head);
    return 0;
}

