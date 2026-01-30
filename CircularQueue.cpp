#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int n;
    int currSize;
    int f,r;
    public:
    Queue(int n){
        this->n=n;
        arr=new int[n];
        currSize =0;
        f=0;
        r=-1;
    }
    
    void push(int data){ //O(1)
        if(currSize==n){
            cout<<"Queue is full";
            return ;
        }
        r=(r+1)%n;
        arr[r]=data;
        currSize++;
    }
    
    void pop(){//O(1)
        if(empty()){
            cout<<"queue is empty"<<endl;
            return;
        }
        f=(f+1)%n;
        currSize--;
    }
    
    int front(){//O(1)
        if(empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    
    bool empty(){
        return currSize==0;
    }
};
int main(){
    Queue q(4);
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(5);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;
}