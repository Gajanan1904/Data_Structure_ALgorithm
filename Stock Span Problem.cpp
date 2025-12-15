#include<iostream>
#include<stack>
using namespace std;
void StockSpanProblem(int stock[],int span[],int n){
    stack<int>s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
        int CurrPrice=stock[i];
        while(!s.empty() && CurrPrice>=stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;
        }
        else{
            int PrevHigh=s.top();
            span[i]=i-PrevHigh;
        }
        s.push(i);
    }
    
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;
    
}
int main(){
    int n;
    cin>>n;
    int stock[n],span[n];
    for(int i=0;i<n;i++){
        cin>>stock[i];
        span[i]=0;
    }
    StockSpanProblem(stock,span,n);
    return 0;
}