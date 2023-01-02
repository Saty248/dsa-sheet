#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class Node{
    public:
    int val;
    Node* next;  
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
Node(int val1,Node *next1){
    val=val1;
    next=next1;
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
Node* copyRandomList(Node* head) {
        
        Node* curr=head;
        
        while(curr!=NULL){
            Node* temp=new Node(curr->val);
            Node* temp2=curr->next;
            curr->next=temp;
            temp->next=temp2;
            curr=temp2;
            
        }
        curr=head;
        
        while(curr!=NULL){
            curr->next->random=curr->random!=NULL?curr->random->next:NULL;
            curr=curr->next->next;
        }
        
         Node* org=head;
        Node* copy=head->next;
        Node* temp=copy;
        while(org!=NULL){
            org->next=org->next->next;
            copy->next=copy->next!=NULL?copy->next->next:NULL;
            org=org->next;
            copy=copy->next;
        }
        return temp;
        
    }




int main()
{
    fastio;
    Node* head1=NULL;
    insHead(head1,1);
    insTail(head1,2);
    insTail(head1,3);
    insTail(head1,4);
    insTail(head1,5);
   
    display(head1);
     /* Node* head2=NULL;
    
    insTail(head2,7);
    insTail(head2,8);
    insTail(head2,9);
    insTail(head2,5);
display(head2); */


    return 0;
}