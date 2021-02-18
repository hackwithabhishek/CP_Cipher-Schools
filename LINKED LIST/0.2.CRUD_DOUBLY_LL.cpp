#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int key;
       int data;
       Node *next;
       Node *previous;
    
    Node(){
        key=0;
        data=0;
        next=NULL;
        previous=NULL;
    }
    Node(int k,int d){
        key = k;
        data= d;
    }
};
class DoublyLinkedList{
    public:
    Node *head;
    DoublyLinkedList(){
        head=NULL;
    }
    DoublyLInkedList(Node *n){
        head=n;
    }
    
    //check Node Exist
    Node* nodeExists(int k){
        Node* temp=NULL;
        Node* ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->key==k)
            {
                temp=ptr;
            }
            ptr=ptr->next;
        }
    return temp;
    }
    //Append Node At the End
    void appendNode(Node * n) 
    {
        if(nodeExists(n->key) != NULL) 
        {
            cout<<"Node Already exists"<<endl;
        } 
        else 
        {
            if (head == NULL) 
            {
                head = n;
            }
            else{
                Node* ptr = head;
                while (ptr->next != NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                n->previous=ptr;
                n->next=NULL;
                }
            }
    }
    //append Node At Start
    void prependNode(Node*n){
        if(nodeExists(n->key)!= NULL)
        {
            cout<<"Node Already exists"<<endl;
        }
        else{
            if(head==NULL){
                head=n;
            }
            else{
                head->previous=n;
                n->next=head;
                head = n;
                }
            
        }
    }
    //Insert At Particular Node  
    void insertNodeAfter(int k, Node * n){
        Node* ptr=nodeExists(k);
        if(ptr==NULL)
        {
            cout << "No node exists"<<endl;
        }
        else{
            if(nodeExists(n->key)!=NULL)
            {
                cout<<"Node Already exists"<<endl;
            }
            else{
                Node* nextNode=ptr->next;
                if (nextNode==NULL)
                {
                    ptr->next=n;
                    n->previous=ptr;
                }
                else{
                    n->next=nextNode;
                    nextNode->previous=n;
                    n->previous=ptr;
                    ptr->next=n;
                    }
                }
            }
    }
    //Delete Node By unique Key 
    void deleteNodeByKey(int k){
        Node*ptr=nodeExists(k);
        if(ptr==NULL)
        {
            cout<<"No node exists"<<endl;
        }
        else{
            if(head->key==k){
                head=head->next;
                cout<<"Node UNLINKED with keys value : "<<k<<endl;
            }
            else{
                Node * nextNode = ptr - > next;
                Node * prevNode = ptr - > previous;
        
                if (nextNode == NULL)
                {
                    prevNode - > next = NULL;
                }
                else
                {
                    prevNode - > next = nextNode;
                    nextNode - > previous = prevNode;
                    
                }
            }
        }
    }
     //update node
     void updateNodeByKey(int k, int d){
         Node * ptr = nodeExists(k);
         if (ptr != NULL)
         {
             ptr - > data = d;
         }
         else{
             cout << "Node Doesn't exist"<< endl;
             }
    }
    void printList(){
        if (head == NULL){
            cout << "No Nodes in Doubly Linked List";
        }
        else{
            cout << endl << "Doubly Linked List Values : ";
            Node * temp = head;
            while (temp != NULL) {
                cout << "(" << temp - > key << "," << temp - > data << ") <--> ";
                temp = temp - > next;
        }
    }
 
  }
  
    
};
