#include<iostream>
#include<vector>
using namespace std;
template <class T>
class Stack{
    vector<T>vec;
    public:
    void push_back(T val){
        vec.push_back(val);
    }
    
    bool Isempty(){
        return vec.size()==0;
    }
    
    void pop_back(){
        if(Isempty()){
            cout<<"Stack is empty";
            return;
        }
        else{
            vec.pop_back();
        }
    }
    
    T top(){
        int LastEle=vec[vec.size()-1];
        return LastEle;
    }
};
int main(){
    Stack<char>s;
    s.push_back('c');
    s.push_back('b');
    s.push_back('a');
    
    while(!s.Isempty()){
        cout<<s.top()<<" ";
        s.pop_back();
    }
}