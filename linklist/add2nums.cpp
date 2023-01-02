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
    if(head->next==NULL){
        return head;
    }
    ListNode* tail=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return tail;
 }

  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=reverseList(l1);
        ListNode* h2=reverseList(l2);
        int carry=0;
        int a;
        a=h1->val+h2->val;
        if(a>9){
            a=a-10;
            carry=1;
        }
        ListNode* f1=new ListNode(a);
        ListNode* ans=f1;
        h1=h1->next;
        h2=h2->next;
        while(h1!=NULL && h2!=NULL){
            a=h1->val+h2->val+carry;
            if(a>9){
            a=a-10;
            carry=1;
        }else{
            carry=0;
        }
        ListNode* temp=new ListNode(a);
        f1->next=temp;
        f1=temp;
        h1=h1->next;
        h2=h2->next;
        }
        while(h1!=NULL && h2==NULL){
            a=h1->val+carry;
            if(a>9){
            a=a-10;
            carry=1;
        }else{
            carry=0;
        }
        ListNode* temp=new ListNode(a);
        f1->next=temp;
        f1=temp;
        h1=h1->next;
        }
        while(h1==NULL && h2!=NULL){
            a=h2->val+carry;
            if(a>9){
            a=a-10;
            carry=1;
        }else{
            carry=0;
        }
        ListNode* temp=new ListNode(a);
        f1->next=temp;
        f1=temp;
        h2=h2->next;
        }
        if(carry!=0){
             ListNode* temp=new ListNode(carry);
        f1->next=temp;
        f1=temp;
        }

    return reverseList(ans);
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
    display(head1);
     ListNode* head2=NULL;
    
    insTail(head2,7);
    insTail(head2,8);
    insTail(head2,9);
    insTail(head2,5);
display(head2);

display(addTwoNumbers(head1,head2));
    return 0;
}