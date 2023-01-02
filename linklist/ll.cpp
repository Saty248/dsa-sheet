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



ListNode(int val1){
    val=val1;
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
//reverse insitu
 ListNode* reverseList(ListNode* &head) {
     if(head->next==NULL){
        return head;
     }

     ListNode* tail=reverseList(head->next);
     head->next->next=head;
     head->next=NULL;
     
     return tail;   
    }
//middle 

ListNode* middleNode(ListNode* head) {
        ListNode* fp=head;
        ListNode* sp=head;
        if(fp==NULL){
            return fp;
        }
        while(fp->next!=NULL && fp->next->next!=NULL ){
            fp=fp->next->next;
            sp=sp->next;

        }
        if(fp->next==NULL){
            return sp;
        }
        if(fp->next->next==NULL){
            return sp->next;

        }
        return sp;

    }

    //palindrome
    bool isPalindrome(ListNode* head) {
        ListNode *mid=middleNode(head);
        ListNode *rev=reverseList(mid);

        /* while(head!=NULL && rev!=NULL){
            if(head->val==rev->val){
                head=head->next;
                rev=rev->next;
                cout<<"match="<<rev->val<<endl;
            }
            else{
                break;
            }
        } */
        while(head!=NULL && rev!=NULL){
            

             if(head->val==rev->val){
            
            head=head->next;
            rev=rev->next;
            }
            else{
                break;
            }
        }
        

        if(rev==NULL){
            return true;
        }
        else{
            return false;
        }
    }

//has cycle

 bool hasCycle(ListNode *head) {
        ListNode* fp=head;
        ListNode* sp=head;
        while(fp->next!=NULL && fp->next->next!=NULL){
            if(fp==sp){
                return true;
            }
            fp=fp->next->next;
            sp=sp->next;
        }
        return false;

    }

    //reverse in range
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        
        if(left==right){
            return head;
        }
        for(int i=0;curr!=NULL && i<left-1;i++){
            prev=curr;
            curr=curr->next;
        }
        ListNode* next1=curr->next;
        ListNode* last=prev;
        ListNode* newend=curr;
        int diff=right-left+1;
        while(diff-- && curr!=NULL){
            curr->next=prev;
            prev=curr;
            if(next1!=NULL)
            next1=next1->next;
        }
        last->next=prev;
        newend->next=curr;

        return head;
    }
// reorder
    
  void reorderList(ListNode* head) {
        ListNode* mid=middleNode(head);
        ListNode* end= reverseList(mid);
        ListNode* curr=head;
        ListNode* next1;
        ListNode* next2;
        while(head!=NULL && end!=NULL){
            next1=curr->next;
            next2=end->next;
            curr->next=end;
            end->next=next1;
            curr=next1;
            end=next2;
        }
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int c=0;
        while (curr!=NULL){
            c++;
            curr=curr->next;
        }
        if(c==1){
            return NULL;
        } 
        int diff=c-n-1;
        curr=head;
        while(diff--){
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
        
    }

    void swapNodes(ListNode* head, int k) {
        ListNode* curr=head;
        int c=0;
        while (curr!=NULL){
            c++;
            curr=curr->next;
        }
        
        int diff=c-k-1;
        int adds=k-2;
        
        ListNode* curr1=head;
        ListNode* curr2=head;
        ListNode* next1;
        ListNode* next2;
        ListNode* next3;
        while(diff--){
            curr2=curr2->next;
        }
        while(adds--){
            curr1=curr1->next;
        }
        
         next1=curr1->next;
        next2=curr2->next;
        next3=next2->next;
         
         curr1->next=next2;
         next2->next=next1->next;
        curr2->next=next1;
        next1->next=next3;
        
        
    }

int main()
{
    fastio;
    ListNode *head=NULL;

    insHead(head,1);
    insTail(head,2);
    insTail(head,3);
    insTail(head,4);
    insTail(head,5);

display(head);
 
 reorderList(head);
  display(head) ; 
    return 0;
}