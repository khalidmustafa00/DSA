#include<iostream>
using namespace std;
class abc{
    int x;// if we use mutable key word then we can change in getx ,get y ,getz funtion such as x=50,
    int *y;
    int z;
    public:
    
    abc(int val1,int val2,int val3=0)
    //default argument
    {
        x=val1;
        y=new int(val2);
        z=val3;
    }

     
   
   
   
   
    int getx()const{
    // {   x=50;//give error
        return x;
    }
    void setx(int x){
       this->x=x;

    }
    int gety()const
    {
        // int f=20; this give error because y cant reassigned if we use constkey
        // y=&f;
        return *y;
    }
    void sety(int val){
        *y=val;
        

    }
    int getz()const
    {
        return z;
    }
};
void printabc(const abc&a){
    cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz()<<endl;
}
int main(){
    //but if we call abc a(1,2) then it gives 1,2,0 because of default assignment;
    //if we call any non const function int give error;
    abc a(1,2,3);
    printabc(a);
    // cout<<a.getx()<<endl;
    // cout<<a.gety()<<endl;
    return 0;
}