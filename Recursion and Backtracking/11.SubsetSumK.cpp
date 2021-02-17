#include<bits/stdc++.h>
using namespace std;
static int total_nodes;
int comparator(const void *pLhs, const void *pRhs)
{
    int *lhs = (int *)pLhs;
    int *rhs = (int *)pRhs;
    return *lhs > *rhs;
}
void printSubset(int A[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<" "<< A[i];
    }
    cout<<"\n";
}
void subset_sum(int s[], int t[],int s_size, int t_size,int sum, int ite,int const target_sum)
{
    total_nodes++;
    if( target_sum == sum )
    {
        printSubset(t, t_size);
        if( ite + 1 < s_size && sum - s[ite] + s[ite + 1] <= target_sum )
        {
            subset_sum(s, t, s_size, t_size - 1, sum - s[ite], ite + 1, target_sum);
        }
        return;
    }
    else
    {
        if( ite < s_size && sum + s[ite] <= target_sum )
        {
            for( int i = ite; i < s_size; i++ )
            {
                t[t_size] = s[i];
                if( sum + s[i] <= target_sum )
                {
                    subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
                }
            }
        }
    }
}
void GenerateSubsets(int s[],int size,int target){
    int* tuplet_vector=new int[size];
    int total=0;
    qsort(s,size,sizeof(int),&comparator);
    for(int i=0;i<size;i++)
    {
        total += s[i];
    }
    if(s[0]<=target && total>=target){
        subset_sum(s,tuplet_vector,size,0,0,0,target);
    }
    delete tuplet_vector;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    GenerateSubsets(arr,n,target);
}
