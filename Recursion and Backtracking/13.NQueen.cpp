#include<bits/stdc++.h>
using namespace std ;
int arr[11][11];

bool ispossible(int n,int row,int col){
    for(int i=row-1;i>=0;i--){
        if(arr[i][col]==1){
            return false;
        }
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    return true;
}
void NQ(int n,int row){
    if(row==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";}
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(ispossible(n,row,i)){
            arr[row][i]=1;
            NQ(n,row+1);
            arr[row][i]=0;
        }
   
    }
return;
}


void placeNQueens(int n){
  memset(arr,0,11*11*sizeof(int));
    NQ(n,0);

}
