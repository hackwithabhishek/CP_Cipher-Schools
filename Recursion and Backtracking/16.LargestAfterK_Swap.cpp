#include<bits/stdc++.h>
using namespace std;
void findMax(string str,int k,string& max,int ctr){
    if(k==0){return;}
    int n=str.length();
    char maxm=str[ctr];
    for(int j=ctr+1;j<n;j++){
        if(maxm<str[j]){
            maxm=str[j];
        }
    }
    if(maxm != str[ctr]){
        --k;
    }
    for(int j=ctr;j<n;j++){
        if(str[j]==maxm){
            swap(str[ctr],str[j]);
            if(str.compare(max)>0){
                max=str;
            }
            findMax(str,k,max,ctr+1);
            swap(str[ctr],str[j]);
        }
    }
}
int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;
    string max=str;
    findMax(str,k,max,0);
    cout<<max<<endl;
    return 0;
}
