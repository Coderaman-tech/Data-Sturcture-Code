//Searching a element in matrix with less time complexity
//Given:
//integers in each row are sorted in ascending order
//integers in each column are sorted in ascending order
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>mat[i][j];
    }
    //apply algorithm
    int r=0,c=m-1;
    bool found=false;
    while(r<n and c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found)
    cout<<"Element found";
    else
    cout<<"Element does not exist";
}