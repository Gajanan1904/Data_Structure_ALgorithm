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

    bool Detectcycle(Node *head){
        Node *slow=head;
        Node *fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                cout<<"cycle found"<<endl;
                return true;
            }
        }
        cout<<"No cycle"<<endl;
        return false;
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
    
    
    ll.tail->next=ll.head;
    ll.Detectcycle(ll.head);
    

}

