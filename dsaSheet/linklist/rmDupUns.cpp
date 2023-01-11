#include <bits/stdc++.h>
#define N 1e4+1;
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
    insHead(head,1);
    insTail(head,2);
    insTail(head,3);
    insTail(head,4);
    insTail(head,8);
    display(head);
    vector<int> s1(1e4,0);
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        
            if(s1[temp->val]==0){
                s1[temp->val]++;
                prev=temp;

            }else{
                prev->next=temp->next;
                
                
            }


        
        

        temp=temp->next;
        
    } 
    display(head);
    
    return 0;
}