#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>m;
    pair<string,int>p=make_pair("Scorpio",9);
    m.insert(p);
    pair<string,int>p2("alto",2);
    m.insert(p2);

    m["fortuner"]=10;
    //acess
    cout<<m.at("alto")<<endl;
    cout<<m.at("Scorpio")<<endl;
    cout<<m["fortuner"]<<endl;
    //search
    cout<<m.count("inove")<<endl;
     cout<<m.count("Scorpio")<<endl;
     if(m.find("fortuner")!=m.end()){
        cout<<"fortuner found"<<endl;
     }
     else{
        cout<<"fortuner not found"<<endl;
     }
     cout<<m.size()<<endl;
     cout<<m["hummer"]<<endl;
      cout<<m.size()<<endl;
      cout<<"printing all entries"<<endl;
      for(auto i:m){
        cout<<i.first<<"-"<<i.second<<endl;
      }



    return 0;
}
