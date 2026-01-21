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
    
    void InsertAtPos(int val,int pos){
        Node *newNode=new Node(val);
        Node *temp=head;
        
        for(int i=0;i<(pos-1);i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        cout<<"Inserting at index: "<<pos<<" having value: "<<val<<endl;
    }
    
    void SearchKey(int key){
        Node *temp=head;
        int idx=0;
        while(temp!=NULL){
            if(temp->data==key){
                cout<<"The given key is: "<<key<<" Key found at index: "<<idx<<endl;
                return;
            }
            else{
                temp=temp->next;
                idx++;
            }
        }
        cout<<"key not found"<<endl;
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

    ll.InsertAtPos(0,4);
    ll.printList();             
    ll.SearchKey(0);

}

