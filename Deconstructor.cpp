#include<iostream>
using namespace std;
class Car{
    public:
    string name,color;
    int *mileage;
    Car(string name,string color){
        this->name=name;
        this->color=color;
        mileage= new int;
        *mileage=12;
    }

    ~Car(){
        cout<<"Deleting Object..!";
        if(mileage!=NULL){
            delete mileage;
            mileage=NULL;
        }
    }
};
int main(){
    Car c1("Suzuki","white");
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<*c1.mileage<<endl;
 
}































