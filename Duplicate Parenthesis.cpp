#include<iostream>
#include<stack>
using namespace std;
bool IsDuplicate(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch!=')'){ //if char is not closing push in stack
            s.push(ch);
        }
        else{ //if char is closing 
            if(s.top()=='('){
                return true;  //and found it's pair then return true as duplicate parenthesis
            }
            else{
                while(s.top()!='('){
                    s.pop();  
                }
                s.pop(); 
            }
        }
    }
    return false;

}
int main(){
    string str;
    cin>>str;
    cout<<IsDuplicate(str);
}