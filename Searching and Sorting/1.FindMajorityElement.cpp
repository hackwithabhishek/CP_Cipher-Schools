#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        m[k]=m[k]+1;
    }
    int max=0;
    int ans;
    map<int,int>::iterator it;
    for(it=m.begin();it!=m.end();it++){
        //cout<<it->second<<endl;
        if(max<it->second){
            max=it->second;
            ans=it->first;
        }
    }
    if(max>(n/2)){
        cout<<ans;
    }
    else{
        cout<<"No MAjority";
    }
    return 0;
}
