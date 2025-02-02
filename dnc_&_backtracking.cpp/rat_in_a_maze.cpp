#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//see different solution on geeks for geeks 
bool isSafe(int x,int y,int rows,int col,int maze[][3],vector<vector<bool> >&visited){
    if((x>=0 && x<rows) && (y>=0 && y<col) && (maze[x][y]==1) && (visited[x][y]==false)){
        return true;
    }
    else{
        return false;
    }
}
void solveMaze(int maze[3][3],int rows,int col,int i,int j,vector<vector<bool>>&visited,vector<string>&path, string output ){
    //base case
    
    if(i==rows-1 && j==col-1){
        
        path.push_back(output);
        return;
    }
    //down i+1,j
    if(isSafe(i+1,j,rows,col,maze,visited)){
        visited[i+1][j]=true;
        solveMaze(maze,rows,col,i+1,j,visited,path,output+'D');
        visited[i+1][j]=false;
    }
    //up i-1,j
    if(isSafe(i-1,j,rows,col,maze,visited)){
        visited[i-1][j]=true;
        solveMaze(maze,rows,col,i-1,j,visited,path,output+'U');
        visited[i-1][j]=false;
    }
    //left i,j-1
    if(isSafe(i,j-1,rows,col,maze,visited)){
        visited[i][j-1]=true;
        solveMaze(maze,rows,col,i,j-1,visited,path,output+'L');
        visited[i][j-1]=false;
    }
    //right i,j+1
    if(isSafe(i,j+1,rows,col,maze,visited)){
        visited[i][j+1]=true;
        solveMaze(maze,rows,col,i,j+1,visited,path,output+'R');
        visited[i][j+1]=false;
    }
}
int main(){
    int maze[3][3]={
        {1,0,0},
        {1,1,0},
        {1,1,1},
    };
    //0 means close and 1 means open;
    if(maze[0][0]==0){
        cout<<"No path exist"<<endl;
        return 0;
    }
    int rows=3;
    int col=3;
    //creating 2d array to indicate visited place;
    vector<vector<bool> >visited(rows,vector<bool>(col,false));
    //the place where rat initially present;
    visited[0][0]=true;
    //to store all possible path;
    vector<string>path;
    //to create answer;
    string output="";
    // cout<<"hs";
    solveMaze(maze,rows,col,0,0,visited,path,output);
    
    for(auto i:path){
        cout<<i<<endl;;
    }
    cout<<endl;
    if(path.size()==0){
        cout<<"No path exist"<<endl;
    }
    return 0;
}