#include<iostream>
#include<stack>
using namespace std;
void NextGreaterElement(int arr[],int ans[],int n){
    stack<int>s;
    int idx=n-1;
    ans[idx]=-1;
    s.push(arr[idx]);
    
    for(int i=idx-1;i>=0;i--){
        int CurrEle=arr[i];
        while(!s.empty() && CurrEle>=s.top()){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(CurrEle);
    }
    
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n],int ans[nM];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    NextGreaterElement(arr,ans,n);
    return 0;
}