// You are using GCC
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int val){
        data=val;
        next=NULL;
    }
};
class List{
    public:
    Node *head;
    Node *tail;
    List(){
        head=tail=NULL;
    }
    
    void push_front(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    
    void push_back(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    
    void pop_front(){
        Node *temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        
    }
    
    void pop_back(){
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete tail;
        tail=temp;
        tail->next=NULL;
    }
    
    Node *SplitAtMid(Node *head){
        Node *slow=head;
        Node *fast=head;
        Node *prev=NULL;
        
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev!=NULL){
        prev->next=NULL;
    }
    return slow;
    }
    
    Node *MergeSort(Node *left,Node* Right){
        List ans;
        Node *i=left;
        Node *j=Right;
        
        while(i!=NULL && j!=NULL){
            if(i->data<j->data){
                ans.push_back(i->data);
                i=i->next;
            }
            else{
                ans.push_back(j->data);
                j=j->next;
            }
        }
        while(i!=NULL){
            ans.push_back(i->data);
            i=i->next;
        }
        while(j!=NULL){
            ans.push_back(j->data);
            j=j->next;
        }
        return ans.head;
    }
    
    
    Node *merge(Node *head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node *Righthead=SplitAtMid(head);
        Node *Lefthead=head;
        
        Node *LeftSorted=merge(Lefthead);
        Node *RightSorted=merge(Righthead);
        
        return MergeSort(LeftSorted,RightSorted);
    }
    
    void printList(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();
    ll.push_back(4);
    ll.push_back(5);
    ll.printList();
    
    
    ll.head=ll.merge(ll.head);   //hide to detetct cycle
    ll.printList();              //hide to detetct cycle
    
    
    
    
    
    

    
    
}