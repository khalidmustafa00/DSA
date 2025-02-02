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
    ~Animal(){
        cout<<"i am inside the destructor."<<endl;
    }

};
int main(){
    cout<<"a obj creation"<<endl;
    Animal a;
    a.age=5;
    cout<<"b obj creation"<<endl;
    Animal*b=new Animal();
    b->age=12;
    delete b;
    return 0;
}