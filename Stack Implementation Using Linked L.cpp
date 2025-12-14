#include<iostream>
#include<vector>
#include<string>
using namespace std;
template<class T>
class Node{
    public:
    T data;
    Node<T>*next;
    Node(T val){
        data=val;
        next=NULL;
    }
};
template <class T>
class Stack{
    public:
    Node <T>*head;
    
    Stack(){
        head=NULL;
    }
    void push(T val){
        Node<T>*newNode=new Node<T>(val);
        if(head==NULL){
            head=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    
    void pop(){
        if(Isempty()){
            cout<<"Stack is empty";
            return;
        }
        Node<T>*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    
    T top(){
        return head->data;
    }
    
    bool Isempty(){
        return head==NULL;
    }
};
int main(){
    Stack<char>s;
    s.push('a');
    s.push('b');
    s.push('c');
    
    while(!s.Isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}