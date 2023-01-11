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

int add(Node* curr){
    if(curr->next==NULL){
        if(curr->val==9){
            curr->val=0;
            return 1;
        }else{
            curr->val=curr->val+1;
            return 0;
        }
    }
    else{
        int ans=add(curr->next);
        curr->val=curr->val+ans;
        if(curr->val>9){
            curr->val=0;
            return 1;
        }else{
            return 0;
        }
    }


}

int main()
{
    fastio;
    Node* head=NULL;
     insHead(head,9);
    insTail(head,9);
    insTail(head,9);
    insTail(head,9);
    insTail(head,9);
    display(head);
    
    
    int a =add(head);
    if(a==1){
        Node* temp=new Node(1);
        temp->next=head;
        head=temp;

    }
    display(head);
    return 0;
}