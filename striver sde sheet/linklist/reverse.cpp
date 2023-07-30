#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node *next;
    Node(){
        value=0;
        next=NULL;
    }
    Node(int val){
        value=val;
        next=NULL;
    }

};
void insert(Node* head,int val){
    Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    Node* newNode=new Node(val);
    tmp->next=newNode;
}

void display(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->value<<" -> ";
        tmp=tmp->next;
    }
}


Node* reverse(Node* head,Node* prev){
     Node* tmp=head;
    if(tmp==NULL || tmp->next==NULL){
        tmp->next=prev;
       
        return tmp;
    }
    Node* nxt=tmp->next;
    tmp->next=prev;
   
    return reverse(nxt,tmp);



}

Node* add(Node* h1,Node* h2,int carry,Node* ans){
    if(h1==NULL && h2==NULL){
        if(carry!=0){
             Node* newNode=new Node(carry);
             if(ans==NULL){
               ans=newNode;
     }else{
        Node* tmp=ans;
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
        tmp->next=newNode;

     }

        }
        return ans;
    }
int sum =(h1?h1->value:0)+(h2?h2->value:0)+carry;
     if(ans==NULL){
        Node* newNode=new Node(sum%10);
        ans=newNode;
     }else{
        Node* tmp=ans;
        while(tmp->next!=NULL){
            tmp=tmp->next;
        }
         Node* newNode=new Node(sum%10);
         tmp->next=newNode;

     }
    if(h1==NULL){
         return add(NULL,h2->next,sum/10,ans);
    }
    else if(h2==NULL){
        return add(h1->next,NULL,sum/10,ans);
    }

     return add(h1->next,h2->next,sum/10,ans);
}


int main(){

    Node* head1= new Node(9);
    insert(head1,9);
    
   head1=reverse(head1,NULL);
    cout<<endl;
    display(head1);



cout<<endl;
Node* head2= new Node(4);
    insert(head2,5);
    insert(head2,6);
   head2=reverse(head2,NULL);
    cout<<endl;
    display(head2);

cout<<endl;
    display(add(head1,head2,0,NULL));


}

