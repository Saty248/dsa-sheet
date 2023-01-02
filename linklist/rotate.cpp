#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;  
    
    ListNode(int val){
    this->val=val;
    next=NULL;
}
ListNode(int val1,ListNode *next1){
    val=val1;
    next=next1;
}
};

void insHead(ListNode* &head,int val){
    ListNode* n1=new ListNode(val);
    if (head==NULL){
        head=n1;
    }
    else{
        n1->next=head;
        head=n1;

    }
}
void insTail(ListNode* &head,int val){
    ListNode* n1=new ListNode(val);
    if (head==NULL){
        head=n1;
    }
    else{
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n1;
    }
}

void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<"  ";
        head=head->next;
    }
    cout<<"NULL" <<endl;

}
 ListNode* reverseList(ListNode* &head){
    ListNode* prev=NULL;
    ListNode* curr=head;
    ListNode* next;
    while(curr!=NULL){
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;

    }
    return prev;
 }

 void rotr(ListNode* &head){
    ListNode* curr=head;
        while(curr->next->next!=NULL){
            curr=curr->next;
        }
        curr->next->next=head;
        head= curr->next;
        curr->next=NULL;
        
 }   

 ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    for(int i=1;i<=k;i++){
        rotr(head);
    }

return head;
    }



int main()
{
    fastio;
    ListNode* head1=NULL;
    insHead(head1,1);
    insTail(head1,2);
    insTail(head1,3);
    insTail(head1,4);
    insTail(head1,5);
    head1=rotateRight(head1,2);
    display(head1);
     /* ListNode* head2=NULL;
    
    insTail(head2,7);
    insTail(head2,8);
    insTail(head2,9);
    insTail(head2,5);
display(head2); */


    return 0;
}