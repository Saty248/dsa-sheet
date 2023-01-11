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
    while(head!=NULL){
        cout<<head->val<<"  ";
        head=head->next;
    }
    cout<<"NULL" <<endl;

}

int add(Node* curr1,Node* curr2){
    int ans=0;
    if(curr1->next==NULL && curr2->next==NULL){
        curr1->val+=curr2->val;
        if(curr1->val>9){
            curr1->val-=10;
            return 1;
        }else{
            return 0;
        }
        
    }
    else if(curr1->next!=NULL && curr2->next==NULL){
         ans=add(curr1->next,curr2);

    }
      else if(curr1->next==NULL && curr2->next!=NULL){
         ans=add(curr1,curr2->next);

    }

    else{
         ans=add(curr1->next,curr2->next);
        
    }

    curr1->val=curr1->val+curr2->val+ans;
    if(curr1->val>9){
            curr1->val-=10;
            return 1;
        }else{
            return 0;
        }





}

int main()
{
    fastio;
    Node* head1=NULL;
     insHead(head1,1);
    insTail(head1,1);
    insTail(head1,2);
    insTail(head1,2);
    display(head1);
    Node* head2=NULL;
     insHead(head2,1);
    insTail(head2,1);
    insTail(head2,2);
    insTail(head2,2);
    display(head2);
    
    
     int a =add(head1,head2);
    if(a==1){
        Node* temp=new Node(1);
        temp->next=head1;
        head1=temp;

    } 
    display(head1);
    return 0;
}