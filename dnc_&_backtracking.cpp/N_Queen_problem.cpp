#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
//unordered_map<string,bool>map;
void printsolution(vector<vector<char> >&board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
//34:07 time line in the video
bool isSafe(int row,int col,vector<vector<char> >&board,int n){
    //check krna hai ki kyan mai current cell  col[row][col] pe queen 
    //rakh skta hun ya ni
    int i=row;
    int j=col;
    //check row;
    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }
    //check upper left diagonal;
    i=row;
    j=col;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;
        j--;  
    }
    
    //check bottom left diagonal;
    i=row;
    j=col;
    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++;
        j--;
    }
    //kahin pe queen ni mili
    //iska mtlb ye position safe hai
    //return true krdo;
    return true;

}
void solve(vector<vector<char> >&board,int col,int n){
    //Base case
    if(col>=n){
        printsolution(board,n);
        return;
    }
    // solve 1 case 
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(board,col+1,n);
            board[row][col]='-';
        }
    }
}

int main(){
    int n;  
    cin>>n; 
    vector<vector<char> >board(n,vector<char>(n,'-'));
    int col=0;
    solve(board,col,n);
    return 0;
}
