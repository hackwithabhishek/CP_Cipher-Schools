#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str, int low, int high) 
{ 
    while (low < high) 
    { 
        if (str[low] != str[high]) 
            return false; 
        low++; 
        high--; 
    } 
    return true; 
} 
void Partition(vector<vector<string>> &allpart,vector<string> &currPart,int start,int n,string str)
{
    if(start>=n)
    {
        allpart.push_back(currPart);
        return;
    }
    for(int i=start;i<n;i++){
        if(isPalindrome(str,start,i))
        {
            currPart.push_back(str.substr(start,i-start+1));
            Partition(allpart,currPart,i+1,n,str);
            currPart.pop_back();
        }
    }
}
void PalindromicParti(string str){
    int n=str.length();
    vector<vector<string>> allpart;
    vector<string> currpart;
    Partition(allpart,currpart,0,n,str);
    for(int i=0;i<allpart.size();i++){
        for(int j=0;j<allpart[i].size();j++){
            cout<<allpart[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    string str;
    cin>>str;
    PalindromicParti(str);
    return 0;
}
