#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    
    Node(int num)
    {
        data = num;
        next = NULL;
    }
};
Node* insert(Node *head,int data)
{
    if(head == NULL)
        head = new Node(data);
    else
    {
        Node* temp = head;
        while(temp->next != NULL)
        temp = temp->next;
        
        temp->next = new Node(data);
    }
    
    return head;
}
void print(Node *head)
{
    if(head != NULL)
    {
        cout<<head->data<<" ";
        print(head->next);
    }
}
 
Node *sortedMerge(Node* x,Node* y)
{
    if(x == NULL)
    return y;
    
    if(y == NULL)
    return x;
    
    if(x->data < y->data)
    {
        x->next = sortedMerge(x->next,y);
        return x;
    }
    else
    {
        y->next = sortedMerge(x,y->next);
        return y;
    }
}
int main()
{
    Node *x = NULL, *y = NULL;
    x = insert(x,3);
    x = insert(x,4);
    x = insert(x,7);
    x = insert(x,9);
    cout<<"First Linked List : ";
    print(x);
    
    cout<<endl;
    y = insert(y,1);
    y = insert(y,2);
    y = insert(y,5);
    y = insert(y,6);
    y = insert(y,8);
    cout<<"Second Linked List : ";
    print(y);
    
    cout<<endl;
    cout<<"Merged Linked List in Sorted Order : ";
    Node *result = sortedMerge(x,y);
    print(result);
    
    return 0;
}
