// You are using GCC
#include<iostream>
using namespace std;
//FACTORIAL
// int factorial(int n){
//     if(n==0){
//         return 1; 
//     }
//     else{
//         return n* factorial(n-1);
//     }
// }
// int main(){
//     int ans=factorial(5);
//     cout<<"THE FACT IS: "<<ans<<endl;
// }


//TO PRINT N TO 1
// int print(int n){
//     if(n==0){
//         return 0;
//     }
//     else {
//         cout<<" "<<n;
//         print(n-1);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

//TO PRINT 1 to N
// int print(int n){
//     if(n==0){
//         return 0;
//     }
//     else {
//         print(n-1);
//         cout<<" "<<n;
        
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// } 

//TO FIND SUM OF N NUMBERS
// int  sum(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return n+sum(n-1);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=sum(n);
//     cout<<"THE SUM IS: "<<ans;
// }

//FIBONACCI SERIES
// int fibonacci(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     else{
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans=fibonacci(n);
//     cout<<"THE SERIES IS: "<<ans;
// }

//SORTED ARRAY
// bool is_sorted(int arr[],int n,int i){
//     if(i==n-1){
//         return true;
//     }
//     if(arr[i]>arr[i+1]){
//         return false;
//     }
//     return is_sorted(arr,n,i+1);
    
    
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr1[n];
//     int arr2[n];
//     for(int i=0;i<n;i++){ //sorted : 1
//         cin>>arr1[i];
//     }
    
//     for(int j=0;j<n;j++){ //unsorted : 0
//         cin>>arr2[j]; 
//     }
//     cout<<is_sorted(arr1,n,0)<<endl;
//     cout<<is_sorted(arr2,n,0);
// }























































































































