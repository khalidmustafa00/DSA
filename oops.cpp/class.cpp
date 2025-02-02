#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Animal{
    private:
    int weight;
    public:
    //state or properties
    int age;
    string name;
    //Default constructor
    Animal(){
        this->weight=0;
        this->age=0;
        this->name="";
        cout<<"constructor called"<<endl;
    }
    //parameterised constructor
    Animal(int age){
        this->age=age;
        cout<<"parameterised constructor called"<<endl;
    }
    Animal(int age ,int weight){
        this->age=age;
        this->weight=weight;
        cout<<"parameterised constructor 2 called"<<endl;

    }
    Animal(int age ,int weight,string name){
         this->age=age;
        this->weight=weight;
        this->name=name;
        cout<<"parameterised constructor 3 called"<<endl;


    }
    //copy constructor
    Animal(Animal &obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<" i am inside copy constructor"<<endl;
    }
    //behaviour 
    void eat(){
        cout<<"Eating"<<endl;

    }
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    int getweight(){
        return weight;
    }
    void setweight(int weight){
        this->weight=weight;
    }
    void print(){
        cout<<this->age<<" "<<this->weight<<this->name<<endl;
    }

};
int main(){
    //object creation
    //static
    Animal Ramesh;
    Ramesh.age=12;
    Ramesh.name="lion";
    cout<<Ramesh.age<<endl;
    cout<<Ramesh.name<<endl;
    Ramesh.eat();
    Ramesh.sleep();
    Ramesh.setweight(10);
    cout<<Ramesh.getweight()<<endl;
    // Animal a(10);
    // Animal*b=new Animal(100,10,"khalid");
    // //object copy
    // Animal c=a;
    // Animal animal(c);
    Animal a;
    a.age=20;
    a.setweight(2002);
    a.name="kahlid";
    Animal b=a;
    a.print();
    b.print();
    return 0;
}