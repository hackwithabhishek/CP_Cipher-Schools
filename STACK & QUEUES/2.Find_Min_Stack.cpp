#include<bits/stdc++.h>
using namespace std;

stack<int> S;
int getMin;
void push(int temp){
    if(S.empty()){
        S.push(temp);
        getMin=temp;
    }
    else{
        if(temp>=getMin){
            S.push(temp);
        }
        else{
            S.push(2*temp-getMin);
            getMin=temp;
        }
    }
}

void pop(){
    if(S.empty()){
        return;
    }
    else{
        int y=S.top();
        if(y>=getMin){
            S.pop();
        }
        else{
            getMin=(2*getMin-y);
            S.pop();
        }
    }
}
int getMinimum(){
    return getMin;
}
int main(){
    push(10);
    push(4);
    push(5);
    push(8);
    cout<<getMinimum()<<endl;
    push(1);
    pop();
    pop();
    pop();
    pop();
    cout<<getMinimum()<<endl;
    push(2);
    push(5);
    cout<<getMinimum()<<endl;
    pop();
    pop();
    cout<<getMinimum()<<endl;
    
}
