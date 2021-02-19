#include<bits/stdc++.h>
using namespace std;
struct Interval
{
    int start, end;
};
bool mycomp(Interval interval1, Interval interval2)
{   return interval1.start > interval2.start; }
 
void mergeIntervals(Interval arr[], int n)
{

    sort(arr, arr+n, mycomp);

    int index = 0;
    for (int i=0; i<n; i++)
    {
        if (index != 0 && arr[index-1].start <= arr[i].end)
        {
            while (index != 0 && arr[index-1].start <= arr[i].end)
            {
                arr[index-1].end = max(arr[index-1].end, arr[i].end);
                arr[index-1].start = min(arr[index-1].start, arr[i].start);
                index--;
            }
        }
        else 
            arr[index] = arr[i];
 
        index++;
    }
    cout << "\n After Merging the Intervals are: ";
    for (int i = 0; i < index; i++)
        cout << "[" << arr[i].start << ", " << arr[i].end << "] ";
}
int main()
{
    Interval arr[] = {{1,6},{3,9},{11,13},{2,5}};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeIntervals(arr, n);
    return 0;
}
