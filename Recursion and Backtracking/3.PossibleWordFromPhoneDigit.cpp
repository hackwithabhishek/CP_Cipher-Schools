#include<bits/stdc++.h>
using namespace std;
const char hashTable[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printWord(int A[],int curr_digit,char output[],int n)
{
    if(curr_digit==n)
    {
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<strlen(hashTable[A[curr_digit]]);i++)
    {
        output[curr_digit]=hashTable[A[curr_digit]][i];
        printWord(A,curr_digit+1,output,n);
        if(A[curr_digit]==0 || A[curr_digit]==1)
        {
            return;
        }
    }
}
void PrintWordHelper(int A[],int n)
{
    char result[n+1];
    result[n]='\0';
    printWord(A,0,result,n);
    return;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    PrintWordHelper(A,n);
    return 0;
}
