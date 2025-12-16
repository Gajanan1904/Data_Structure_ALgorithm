#include<iostream>
#include<stack>

using namespace std;
bool IsValid(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);//if opening char then push into stack
        }
        else{
            if(s.empty()){
                return false;//if not a single char found and only closing char return false (corner case)
            }
            
        int top=s.top();
        if((top=='(' && ch==')') || (top=='[' && ch==']') || (top=='{' && ch=='}')){
            s.pop(); //matching pair if found pop it
        }
        else{
            return false;  //if not able to find matching pair false(main case)
        }
        }
        
    }
    if(s.empty()){
            return true; //after match and pop if stack become empty means found all pairs and popped it so valid
        }
        else{
            return false; //stack is not empty means finds all pairs but there are still some openign bracket and no closing bracket
        }
    
    
}
int main(){
    string str;
    cin>>str;
    
    cout<<IsValid(str);
    
    
}