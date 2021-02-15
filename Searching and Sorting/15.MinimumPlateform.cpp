#include <bits/stdc++.h>
using namespace std;

int minumumPlatform(const vector<int>& arr,const vector<int>& dept) {
    sort(arr.begin(), arr.end());
    sort(dept.begin(), dept.end());
    int i = 1, j = 0;
    int currPlatform = 1, minPlatorm = 1;
    while (i < arr.size() && j < dept.size()) {
        if (arr[i] >= dept[j]) {
     
            currPlatform -= 1;
            j++;
        } else {
           
            currPlatform += 1;
            i++;
        }

        minPlatorm = max(minPlatorm, currPlatform);
    }

    return minPlatorm;
}
int main() {

    return 0;
}


int findMissing(vector<int> arr) {
    int missing = 0;
    for (int i = 0; i < arr.size(); i++) {
        missing = missing ^ (i + 1) ^ arr[i]; 
    }

    missing = missing ^ (arr.size() + 1);
}
