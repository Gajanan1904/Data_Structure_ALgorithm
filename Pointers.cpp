// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *ptr=&a;
//     int *pptr=ptr;
//     cout<<ptr<<endl;
//     cout<<&a<<endl;
//     cout<<pptr<<endl;
//     cout<<*(pptr)<<endl;
//     cout<<pptr<<endl;
//     cout<<&ptr;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     int *ptr=&a;
//     cout<<a<<endl;
//     cout<<*ptr<<endl;
//     *ptr=20;
//     cout<<*ptr<<endl;
//     cout<<a<<endl;
// }

//NULL POINTERS
// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr=NULL;
//     cout<<ptr<<endl;
// }

//Passing Arguments
//CALL BY VALUE
// #include<iostream>
// using namespace std;
// void ChangeA(int a){
//     a=20;
//     cout<<a<<endl;
// }
// int main(){
//     int a=10;
//     cout<<a<<endl;
//     ChangeA(a);
//     cout<<a;
// }

// #include<iostream>
// using namespace std;
// void ChangeA(int param){
//     param=20;
//     cout<<"Change in a is: "<<param<<endl;
// }
// int main(){
//     int a=10;
//     cout<<a<<endl;;
//     ChangeA(a);  //....Here also it will print 20 as it stores the value of that address
//     cout<<a;
// }


//Pass by reference
// #include<iostream>
// using namespace std;
// void ChangeA(int *ptr){
//     *ptr=20;
//     cout<<"THE CHANGE IN A IS: "<<*ptr<<endl;
//     cout<<"THE CHANGE IN A IS: "<<ptr<<endl;
// }
// int main(){
//     int a=10;
//     cout<<a<<endl;
//     ChangeA(&a);
//     cout<<&a;
    
// }


//Reference variables...Reference variable is an alternate name (alias) of already existing variable....
//a 8 b refer to the same location in memory
// #include<iostream>
// using namespace std;
// int main(){
//     int a=20;
//     cout<<a<<endl;
//     int &b=a;
//     b=25;
//     cout<<b<<endl;
//     cout<<a<<endl;
// }


//Reference variable by pass by Reference
#include<iostream>
using namespace std;
void ChangeA(int &param){
    param=25;
    cout<<"THE CHANGE in A is: "<<param<<endl;
}
int main(){
    int a=10;
    cout<<a<<endl;
    ChangeA(a);
    cout<<a;
}












































