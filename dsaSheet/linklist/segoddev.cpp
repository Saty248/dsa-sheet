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





int main()
{
    fastio;
    Node* head=NULL;
     insHead(head,9);
    insTail(head,2);
    insTail(head,9);
    insTail(head,4);
    insTail(head,9);
    display(head);
    
    Node* temp=head;
        Node* odd=NULL;
        Node* even=NULL;
        Node* todd;
        Node* teven;
        while(temp!=NULL){
            if(temp->val%2==0){
                if(even==NULL){
                    even=temp;
                    teven=even;
                }else{
                    teven->next=temp;
                    teven=teven->next;
                    
                }
            }
            if(temp->val%2!=0){
                if(odd==NULL){
                    odd=temp;
                    todd=odd;
                }else{
                    todd->next=temp;
                    
                    todd=todd->next;
                    
                }
            }
            temp=temp->next;
            
            
        }
        
        teven->next=odd;
   
    display(even);
    return 0;
}