#include <iostream> 
#include <stack>
using namespace std; 
  
stack<int> sort(stack<int> &input){ 
    stack<int> tmpStack; 
  
    while(!input.empty()){ 
        
        int tmp = input.top(); 
        input.pop(); 
  
        while(!tmpStack.empty() && tmpStack.top() > tmp){ 
            input.push(tmpStack.top()); 
            tmpStack.pop(); 
        } 
  
        tmpStack.push(tmp); 
    } 
  
    return tmpStack; 
} 
  
int main(){ 
    stack<int> input; 
    
    input.push(20); 
    input.push(6); 
    input.push(-1); 
    input.push(2); 
    input.push(4); 
    input.push(9); 
  
    stack<int> tmpStack = sort(input); 
    
    while (!tmpStack.empty()){ 
        cout << tmpStack.top()<< " "; 
        tmpStack.pop(); 
    } 
}
