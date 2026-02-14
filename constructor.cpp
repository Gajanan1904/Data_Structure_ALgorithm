//constructor
// #include<iostream>
// using namespace std;
// class Car{
//     string name;
//     string color;
//     public:
//     Car(){
//         cout<<"constructor being called as the object is created";
//     }
//     void stop(){
//         cout<<"Car has stopped";
//     }
    
//     void start(){
//         cout<<"CAr has started";
//     }
// };
// int main(){
//     Car c1;
//     c1.stop();
//     cout<<endl;
//     c1.start();
// }

//constructor as initializer
// #include<iostream>
// using namespace std;
// class Car{
//     private:
//     string name;
//     string color;
//     public:
//     Car(string nameval,string colorval){
//         name=nameval;
//         color=colorval;
//     }
    
//     string getName(){
//         return name;
//     }
//     string getcolor(){
//         return color;
//     }
// };
// int main(){
//     string namee,collor;
//     cin>>namee>>collor;
//     Car c1(namee,collor);
//     cout<<"NAME OF CAR IS: "<<c1.getName()<<endl;
//     cout<<"Color OF CAR IS: "<<c1.getcolor()<<endl;
// }

//USE of this operator
// #include<iostream>
// using namespace std;
// class Car{
//     private:
//     string name;
//     string color;
//     public:
//     Car(string name,string color){
//         this->name=name;
//         this->color=color;
//     }
    
//     string getName(){
//         return name;
//     }
//     string getcolor(){
//         return color;
//     }
// };
// int main(){
//     string nameval,colorval;
//     cin>>nameval>>colorval;
//     Car c1(nameval,colorval);
//     cout<<"NAME OF CAR IS: "<<c1.getName()<<endl;
//     cout<<"Color OF CAR IS: "<<c1.getcolor()<<endl;
// }


//Question : 1--Create a User class with properties : id (private), username(public) & password (private).Its id should be initialized in a parameterised constructor.
//It should have a Getter & Setter for password.
// #include<iostream>
// using namespace std;
// class User{
//     private:
//     string id,password;
//     public:
//     string username;
    
//     User(string id){
//         this->id=id;
//         cout<<"ID IS CREATED\n";
//         cout<<id<<endl;
//     }
    
//     void setPass(string passval){
//         password=passval;
//     }
    
//     string getPass(){
//         return password;
//     }
// };
// int main(){
//     User a1("Omiii");
//     a1.setPass("omiii@77750");
//     cout<<"THE PASSWORD IS: "<<a1.getPass();
    
    
// }

//COPY CONSTRUCTOR
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name;
//     string color;
    
    
//     Car(string name,string color){
//         this->name=name;
//         this->color=color;
//     }
    
//     Car(Car &original){
//         cout<<"Copying original to new\n";
//         name=original.name;
//         color=original.color;
//     }
    
    
// };
// int main(){
//     Car c1("suziki","white");
//     Car c2(c1);;
//     cout<<c2.name<<endl;
//     cout<<c2.color<<endl;
    
// }


//DEEP COPY & SHALLOW COPY
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name,color;
//     int *mileage;
//     Car(string name,string color){
//         this->name=name;
//         this->color=color;
//         mileage= new int;
//         *mileage=12;
//     }
    
//     Car(Car &original){
//         cout<<"Copy constructor is created\n";
//         name=original.name;
//         color=original.color;
//         mileage=original.mileage;
//     }
    
// };
// int main(){
//     Car c1("Suzuki","white");
//     Car c2(c1);
//     cout<<c2.name<<endl;
//     cout<<c2.color<<endl;
//     cout<<*c2.mileage<<endl;
//     *c2.mileage=10;
//     cout<<*c1.mileage<<endl;
// }












