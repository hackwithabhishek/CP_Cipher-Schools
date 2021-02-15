#include<bits/stdc++.h>
using namespace std;
void FindFirstAndLast(vector<int> arr, int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++)
    {
        if (x != arr[i]){continue;}
        if (first == -1){first = i;}
        last = i;
    }
    if (first != -1){cout<< first<<" "<<last;}
    else {cout << "Not Found";}
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int x;
    cin>>x;
    FindFirstAndLast(v,n,x);
}
