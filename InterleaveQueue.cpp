#include<iostream>
#include<queue>
using namespace std;
void InterleaveQueue(queue<int>&originalQ){
    int n=originalQ.size()/2;
    queue<int>tempQ;
    for(int i=0;i<n;i++){
        tempQ.push(originalQ.front());
        originalQ.pop();
    }
    
    while(!tempQ.empty()){
        originalQ.push(tempQ.front());
        tempQ.pop();
        
        originalQ.push(originalQ.front());
        originalQ.pop();
    }
}
int main(){
    queue<int>originalQ;
    int a;
    for(int i=1;i<=10;i++){
        originalQ.push(i);
    }
    
    InterleaveQueue(originalQ);
    
    while(!originalQ.empty()){
        cout<<originalQ.front()<<" ";
        originalQ.pop();
    }
}
