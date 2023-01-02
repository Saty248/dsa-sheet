#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
class Node{
    public:
    string url="";
    Node* next=NULL;
    Node* prev=NULL;
    Node(){
        url="";
        next=NULL;
        prev=NULL;

    }
    Node(string url){
        this->url=url;
    }
};

class BrowserHistory {
public:
Node* head=new Node();
Node* tail;
Node* curr;
    BrowserHistory(string homepage) {
        head->url=homepage;
        tail=head;
        curr=head;
    }
    
    void visit(string url) {
        Node* temp=new Node(url);
        curr->next=temp;
        temp->prev=curr;
        tail=temp;
        curr=temp;

    }
    
    string back(int steps) {
        Node* temp=curr;
        while(steps-- && temp->prev!=NULL){
            temp=temp->prev;
            
        }
        return temp->url;
    }
    
    string forward(int steps) {
        Node* temp=curr;
        while(steps && temp!=curr){
            temp=temp->next;
            
        }
        return temp->url;
    }
};
int main()
{
    fastio;
    
    return 0;
}