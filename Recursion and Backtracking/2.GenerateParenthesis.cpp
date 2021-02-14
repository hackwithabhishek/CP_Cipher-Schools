#include<bits/stdc++.h>
using namespace std;
void GenerateParenthesis(int pos,int n,int open,int close){
    static char str[100];
    if(close==n){
        cout<<str<<endl;
    }
    else{
        if(open>close){
            str[pos] = '}'; 
            GenerateParenthesis(pos+1,n,open,close+1);
        }
        if(open<n){
            str[pos] = '{'; 
            GenerateParenthesis(pos+1,n,open+1,close);
        }
    }
    return;
}
void ParenthesisHelper(int n){
    if(n>0){
        GenerateParenthesis(0,n,0,0);
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    ParenthesisHelper(n);
    return 0;
}
