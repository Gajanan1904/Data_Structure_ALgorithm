#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverse(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    queue<int>q;
    for(int i=1;i<=10;i++){
        q.push(i);
    }

    reverse(q);
}