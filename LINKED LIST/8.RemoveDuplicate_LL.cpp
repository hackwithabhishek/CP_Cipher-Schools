#include <bits/stdc++.h>
using namespace std;
struct ListNode{
  int data;
  ListNode *next;
};
ListNode* create(int data){
  ListNode* tmp = new ListNode();
  tmp->data = data;
  tmp->next = NULL;
  return tmp;
}
ListNode* deleteDuplicates(ListNode* head) {
    if(head==NULL || head->next==NULL)
        return head;
    ListNode* prev = create(-1);
    ListNode* dummy = prev;
    ListNode* cur = head;
    prev->next = cur;
    while(cur && cur->next) {
        if(cur->data == cur->next->data) {
            while(cur->next && cur->data==cur->next->data) {
                ListNode* tmp = cur;
                cur = cur->next;
                free(tmp);
            }
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        } else {
            prev = cur;
            cur = cur->next;
        }
    }
    return dummy->next;
}
void printLinkedList(ListNode *headA){
  while(headA != NULL){
    cout<<headA->data<<" ";
    headA = headA->next;
  }
}
int main(){
  ListNode *headA = create(1);
  headA->next = create(2);
  headA->next->next = create(2);
  headA->next->next->next = create(2);
  headA->next->next->next->next = create(3);
  headA->next->next->next->next->next = create(5);
  headA->next->next->next->next->next->next = create(7);
  headA->next->next->next->next->next->next->next = create(7);
  headA = deleteDuplicates(headA);
  printLinkedList(headA);
}
