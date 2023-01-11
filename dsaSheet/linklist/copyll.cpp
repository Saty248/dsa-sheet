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
    Node* arb=NULL;
    Node(int val){
        this->val=val;
        next=NULL;
        arb=NULL;
    }
   
};
void insHead(Node* &head,int val){
    Node* n1=new Node(val);
    if (head==NULL){
        head=n1;
        head->arb=head;
    }
    else{
        n1->next=head;
        head=n1;
         head->arb=head;

    }
}
void insTail(Node* &head,int val){
    Node* n1=new Node(val);
    if (head==NULL){
        head=n1;
         head->arb=head;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
             head->arb=head;
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
void inserttail(Node* head,Node* &copyhead){
        Node* temp;
        while(head){
            if(copyhead==NULL){
                copyhead=new Node(head->val);
                
                temp=copyhead;
            }else{
                temp->next=new Node(head->val);
                temp=temp->next;
            }
            head=head->next;
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
     Node* copyhead=NULL;
        inserttail(head,copyhead);
            

         Node* temp=head;
        Node* ctemp=copyhead;
        while(temp!=NULL){
            Node* tnext=temp->next;
            Node* cnext=ctemp->next;
            temp->next=ctemp;
            ctemp->next=tnext;
            temp=tnext;
            ctemp=cnext;
            
            
           
        }
         
        
          temp=head;
         ctemp=copyhead;
        
       while(temp){
           ctemp->arb=temp->arb->next;
           if(temp->next!=NULL)
           temp->next=temp->next->next;
           if(ctemp->next==NULL){
            ctemp->next=NULL;
           }
           ctemp->next=ctemp->next->next;
           temp=temp->next;
           ctemp=ctemp->next;
       }
       
       display(copyhead);
        
        
    
    
    return 0;
}