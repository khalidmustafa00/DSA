#include<iostream>
using namespace std;
class abc{
    int x;
    int *y;
    const int z; // if we use const key word here then it give error in constructor abc but not in initializationlist;
    public:
    
    // abc(int val1,int val2,int val3=0)
    // //default argument
    // {
    //     x=val1;
    //     y=new int(val2);
    //     z=val3;
    // }

    //initialisation list;
    abc(int val1,int val2,int val3=0) : x(val1),y(new int (val2)),z(val3){
        cout<<"in init list"<<endl;
        *y*=10;
        //but don't do z=10;because const variable can't reassigned;
    }
    int getx()const{
        return x;
    }
    void setx(int x){
       this->x=x;

    }
    int gety()const
    {
        
        return *y;
    }
    void sety(int y){
     *(this->y)=y;
        

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
    
    abc a(1,2,3);
    printabc(a);
   
    return 0;
}