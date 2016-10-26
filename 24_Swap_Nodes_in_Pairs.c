struct ListNode {
  int val;
  struct ListNode *next;
};

// Given a linked list, swap every two adjacent nodes and return its head
struct ListNode* swapPairs(struct ListNode* head) {
  struct ListNode *current = head, *previous;  
  if(current != NULL && current->next != NULL) {  
    previous = current->next;  
    current->next = previous->next;  
    previous->next = current;  
    head = previous;  
    while(current->next != NULL && current->next->next != NULL) { 
      previous = current->next->next;  
      current->next->next = previous->next;  
      previous->next = current->next;  
      current->next = previous;  
      current = previous->next;  
    }  
  }  
  
  return head;  
}

int main() {}
