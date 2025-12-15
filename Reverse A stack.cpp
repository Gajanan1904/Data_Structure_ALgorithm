#include<iostream>
#include<stack>
using namespace std;
template<class T>
void pushAtBottom(stack<T>&s,T val){
    if(s.empty()){
        s.push(val);
        return;
    }
    
    T temp=s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);
}
template<class T>
void Reverse(stack<T>&s){
    if(s.empty()){
        return;
    }
    T temp=s.top();
    s.pop();
    Reverse(s);
    pushAtBottom(s,temp);
}
int main(){
    stack<char>s;
    s.push('c');
    s.push('b');
    s.push('a');
    
    Reverse(s);
    
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}