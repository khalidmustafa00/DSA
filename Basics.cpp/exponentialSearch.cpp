#include<iostream>
using namespace std;
//application 
//1.search in infinite array where n is not known
//2.Better than binary search if x in the begining

int Bs(int a[],int s,int e,int x){
    {
   
    while (s <= e)
    {
        int mid = s+ (e-s) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (a[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

}

int exPonentialSearch(int a[],int n,int x){
   if(a[0]==x){
    return 0;
   }
   int i=1;
   while(i<n && a[i]<=x){
    i*=2;//i=i<<1;

   }
    return Bs(a,i/2,min(i,n-1),x);
}
int main(){
    int a[]={3,4,5,6,11,13,14,15,56,70};
    int n=sizeof(a)/sizeof(int);
    int x=70;
    int ans=exPonentialSearch(a,n,x);
    cout<<ans<<endl;

    return 0;
}