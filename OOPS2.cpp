// // You are using GCC
// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     string name;
//     public:
//     float cgpa;
    
//     void getPercentage(){
//         cout<<"THE Percentage is: "<<cgpa*10<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.cgpa=9.0;
//     cout<<s1.cgpa<<endl;
//     s1.getPercentage();
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class User{
//     string name;
//     string password;
//     string bio;
    
//     void deactivation(){
//         cout<<"Deleting acount\n";
//     }
    
//     void editBio(){
//         bio=newBio;
//     }
// };
// int main(){
//     User a1;
// }


// You are using GCC
// #include<iostream>
// using namespace std;
// class Student{
//     private:
//     string name;
//     float cgpa;
//     public:
//     void getpercentage(){
//         cout<<"The percentage is: "<<cgpa*10<<endl;
//     }
//     //Setters
//     void setname(string newname){
//         name=newname;
//     }
    
//     void setcgpa(float newcgpa){
//         cgpa=newcgpa;
//     }
//     //Getters
//     string getname(){
//         return name;
//     }
    
//     float getcgpa(){
//         return cgpa;
//     }
// };
// int main(){
//     Student s1;
//     s1.setname("Piyaa");
//     s1.setcgpa(9.0);
    
//     cout<<s1.getname()<<endl;
//     cout<<s1.getcgpa()<<endl;
    
// }

// #include<iostream>
// using namespace std;
// class User{
//     private:
//     string password;
//     public:
//     string name;
//     string bio;
    
//     void username(){
//         cout<<"The username of the id is: "<<name<<endl;
//     }
    
//     void idbio(){
//         cout<<"The bio of the given id is: "<<bio<<endl;
//     }
    
//     void setpassword(string pass){
//         password=pass;
//     }
    
//     string getpassword(){
//         cout<<"The password of the given id is: "<<password;
//     }
// };
// int main(){
//     User a1;
//     a1.name="Piyaa";
//     a1.bio="LPU'27";
//     a1.username();
//     a1.idbio();
    
//     a1.setpassword("Lovely@12313438");
//     a1.getpassword();
// }


// #include<iostream>
// using namespace std;
// class car{
//     private:
//     string name;
//     string color;
//     public:
//     car(){
//         cout<<"The constructor is called.object being created";
//     }
//     void start(){
//         cout<<"Car has started";
//     }
//     void stop(){
//         cout<<"car has stopped";
//     }
// };
// int main(){
//     car c1;
// }



// #include<iostream>
// using namespace std;
// class car{
//     private:
//     string name;
//     string color;
//     public:
//     car(string nameval,string colorval){
//         cout<<"The constructor is called.object being created\n";
//         name=nameval;
//         color=colorval;
//     }
//     void start(){
//         cout<<"Car has started\n";
//     }
//     void stop(){
//         cout<<"car has stopped";
//     }
    
//     string getname(){
//         return name;
//     }
    
//     string getcolor(){
//         return color;
//     }
// };
// int main(){
//     car c1("Fortuner","White");
//     cout<<"Car name is: "<<c1.getname()<<endl;
//     cout<<"Carv color is: "<<c1.getcolor()<<endl;
//     c1.start();
//     c1.stop();
// }

// #include<iostream>
// using namespace std;
// class car{
//     private:
//     string name;
//     string color;
//     public:
//     car(){
//         cout<<"constructor without parameter\n";
//     }
//     car(string nameval,string colorval){
//         cout<<"The constructor is called.object being created\n";
//         name=nameval;
//         color=colorval;
//     }
//     void start(){
//         cout<<"Car has started\n";
//     }
//     void stop(){
//         cout<<"car has stopped";
//     }
    
//     string getname(){
//         return name;
//     }
    
//     string getcolor(){
//         return color;
//     }
// };
// int main(){
//     car c0;
//     car c1("Fortuner","White");
//     cout<<"Car name is: "<<c1.getname()<<endl;
//     cout<<"Carv color is: "<<c1.getcolor()<<endl;
//     c1.start();
//     c1.stop();
// }


//POLYMORPHISM:Function Overloading
// #include<iostream>
// using namespace std;
// class Print{
//     public:
//     void show(int x){
//         cout<<"THE int value is: "<<x<<endl;
//     }
//     void show(string str){
//         cout<<"The string value is: "<<str<<endl;
//     }
    
    
// };
// int main(){
//     Print a1;
//     a1.show(55);
//     a1.show("Omiii");
// }

//POLYMORPHISM:operator Overloading
// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int real;
//     int img;
//     public:
//     Complex(int r,int i){
//         real=r;
//         img = i;
//     }
    
//     void showComplex(){
//         cout<<""<<real<<"+"<<img<<"i\n";
//     }
    
//     void operator + (Complex &c2){
//         int resreal=this->real+c2.real;
//         int resimg=this->img+c2.img;
//         Complex c3(resreal,resimg);
//         cout<<"res= ";
//         c3.showComplex();
//     }
// };
// int main(){
//     Complex c1(5,3);
//     Complex c2(8,6);
//     c1.showComplex();
//     c2.showComplex();
//     c1+c2;
// }

// #include<iostream>
// using namespace std;
// class Complex{
//     private:
//     int real,imaginary;
//     public:
//     Complex(int r,int i){
//         real=r;
//         imaginary=i;
//     }
    
//     void showComplex(){
//         cout<<" "<<real<<"+"<<imaginary<<"i\n";
//     }
    
//     void operator +(Complex &c2){
//         int resreal=this->real+c2.real;
//         int resimg=this->imaginary+c2.imaginary;
//         Complex c3(resreal,resimg);
//         cout<<"";
//         c3.showComplex();
//     }
    
    
// };
// int main(){
//     Complex c1(4,5);
//     Complex c2(6,7);
//     c1.showComplex();
//     c2.showComplex();
//     c1+c2;
// }

// //Function Overriding
// #include<iostream>
// using namespace std;
// class Parent{
//     public:
//     void show(){
//         cout<<"parent class show.\n";
//     }
// };
// class child:public parent{
//     public:
//     void show(){
//         cout<<"child class show.\n";
//     }
// };






































