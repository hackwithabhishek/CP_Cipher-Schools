#include<bits/stdc++.h>
using namespace std;
int CountPath(int m,int n){
    if(n==1 || m==1){
        return 1;
    }
    return CountPath(m-1,n)+CountPath(m,n-1);
}
int main(){
    cout<<CountPath(3,4);
    return 0;
}
