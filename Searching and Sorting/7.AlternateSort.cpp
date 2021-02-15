
#include <bits/stdc++.h> 
using namespace std; 

void alternateSort(int arr[], int n) 
{
    sort(arr, arr+n); 
    int i = 0, j = n-1; 
    while (i < j) { 
        cout << arr[j--] << " "; 
        cout << arr[i++] << " "; 
    }  
    if (n % 2 != 0) 
        cout << arr[i]; 
} 
int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    alternateSort(arr, n); 
    return 0; 
} 
