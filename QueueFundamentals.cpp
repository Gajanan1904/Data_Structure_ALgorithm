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
class Queue{
    public:
    Node *head;
    Node* tail;
    
    Queue(){
        head=tail=NULL;
    }
    
    void push(int val){
        Node *newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    
    bool Isempty(){
        if(head==NULL){
            return true;
        }
        return false;
    }
    
    void pop(){
        if(Isempty()){
            cout<<"Queue is empty";
        }
        else{
            Node *temp=head;
            head=head->next;
            delete temp;
        }
    }
    
    int front(){
        if(Isempty()){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return head->data;
        }
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    while(!q.Isempty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
}