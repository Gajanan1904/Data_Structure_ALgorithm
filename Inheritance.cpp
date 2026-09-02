//FOR PUBLIC:
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     string color;
//     void eat(){
//         cout<<"Can eat\n";
//     }
//     void breath(){
//         cout<<"Can breath\n";
//     }
// };
// class fish: public Animal{
//     public:
//     int fins;
//     void swim(){
//         cout<<"Can swim\n";
//     }
//     void live(){
//         cout<<"Can live\n";
//     }
// };
// int main(){
//     fish f1;
//     f1.fins=3;
//     cout<<f1.fins<<endl;
//     f1.swim();
//     f1.live();
//     f1.eat();
//     f1.breath();
//     f1.color="White";
//     cout<<f1.color;
// }

//FOR PROTECTED
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     string color;
//     void eat(){
//         cout<<"Can eat\n";
//     }
//     void breath(){
//         cout<<"Can breath\n";
//     }
// };
// class fish: protected Animal{
//     public:
//     int fins;
//     void swim(){
//         eat();
//         cout<<"Can swim\n";
//     }
//     void live(){
//         breath();
//         cout<<"Can live\n";
//     }
    
//     void setcolor(string color){
//         this->color=color;
//     }
    
//     string getcolor(){
//         return color;
//     }
    
    
// };
// int main(){
//     fish f1;
//     f1.fins=3;
//     cout<<f1.fins<<endl;
//     f1.swim();
//     f1.live();
//     f1.setcolor("White");
//     cout << f1.getcolor() << endl;
// }


//MULTILEVEL INHERITANCE
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     string color;
//     void eat(){
//         cout<<"Can eat\n";
//     }
//     void breath(){
//         cout<<"Can breath\n";
//     }
// };
// class fish: public Animal{
//     public:
//     int fins;
//     void swim(){
//         cout<<"Can swim\n";
//     }
//     void live(){
//         cout<<"Can live\n";
//     }
// };
// class suzi:public fish{
//     string name;
//     void talk(){
//         cout<<"Can talk\n";
//     }
//     void walk(){
//         cout<<"Can walk\n";
//     }
// };
// int main(){
//     suzi s1;
//     s1.eat();
//     s1.breath();
//     s1.swim();
//     s1.live();
// }



//MULTIPLE INHERITANCE
// #include<iostream>
// using namespace std;
// class Teacher{
//     public:
//     int salary;
//     string subject;
// };
// class Student{
//     public:
//     int roll_no;
//     float cgpa;
// };
// class TA:public Teacher,public Student{
//     public:
//     string name;
// };
// int main(){
//     TA t1;
//     t1.name="omii";
//     t1.salary=50000;
//     t1.subject="c++";
//     t1.roll_no=51;
//     t1.cgpa=9.5;
//     cout<<t1.name<<endl;
//     cout<<t1.salary<<endl;
//     cout<<t1.subject<<endl;
//     cout<<t1.roll_no<<endl;
//     cout<<t1.cgpa<<endl;
    
// }

//Hierarchial/ Hybrid INHERITANCE
// #include<iostream>
// using namespace std;

// class Animal {
//     public:
//     string color;

//     void eat() {
//         cout << "Can eat\n";
//     }

//     void breath() {
//         cout << "Can breath\n";
//     }
// };

// class Bird : public Animal {
//     public:
//     void fly() {
//         cout << "Can fly\n";
//     }
// };

// class Fish : public Animal {
//     public:
//     void swim() {
//         cout << "Can swim\n";
//     }
// };

// class Mammal : public Animal {
//     public:
//     void walk() {
//         cout << "Can walk\n";
//     }
// };

// int main() {
//     Bird b1;
//     b1.color = "Red";
//     cout << "Bird color: " << b1.color << endl;
//     b1.eat();
//     b1.breath();
//     b1.fly();

//     Fish f1;
//     f1.color = "Blue";
//     cout << "\nFish color: " << f1.color << endl;
//     f1.eat();
//     f1.breath();
//     f1.swim();

//     Mammal m1;
//     m1.color = "Brown";
//     cout << "\nMammal color: " << m1.color << endl;
//     m1.eat();
//     m1.breath();
//     m1.walk();

//     return 0;
// }







































