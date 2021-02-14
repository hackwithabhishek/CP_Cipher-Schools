#include<bits/stdc++.h>
using namespace std;
int FindFibo(int n){
    if(n==0 ){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return FindFibo(n-1)+FindFibo(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<FindFibo(n);
    return 0;
}
