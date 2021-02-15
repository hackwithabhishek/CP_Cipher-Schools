#include <bits/stdc++.h> 
using namespace std; 
vector<int> segregate(vector<int> arr, int n) 
{ 
    int count = 0;
    for (int i = 0; i < n; i++) { 
        if (arr[i] == 0) 
            count++; 
    } 
  
    for (int i = 0; i < count; i++) {arr[i] = 0; }
    for (int i = count; i < n; i++) {arr[i] = 1; }
return arr;
} 

int main() 
{ 
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    v=segregate(v, n); 
     for (int i = 0; i < n; i++) 
     {
         cout << v[i] << " ";
    }
    return 0; 
}
