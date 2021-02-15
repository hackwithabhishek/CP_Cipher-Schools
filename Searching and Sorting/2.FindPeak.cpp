#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    if(n==1){cout<<v[0]<<" ";}
    if(n>=2){
        if(v[0]>v[1])
        {
            cout<<v[0]<<" ";
        }
        if(v[n]>v[n-1])
        {
            cout<<v[n]<<" ";
        }
        for(int i=1;i<n-1;i++){
            if(v[i]>v[i-1]&&v[i]>v[i+1]){
                cout<<v[i]<<" ";
            }
        }
        
    }
    return 0;
}
