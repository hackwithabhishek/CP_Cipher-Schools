#include<bits/stdc++.h>
using namespace std;
void Permutation(string s,int l,int r){
    if(l==r){
        cout<<s<<endl;
    }
    else{
        
        for(int i=l;i<=r;i++)
        {
           swap(s[1],s[i]);
           Permutation(s,l+1,r);
           swap(s[1],s[i]);
        }
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    Permutation(s,0,n-1);
    return 0;
}
