#include <stdio.h>
struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
  if (head == NULL) return NULL;

  struct ListNode* p = head;
  struct ListNode* temp = NULL;
  while (p->next != NULL) {
    head = p->next;
    p->next = temp;
    temp = p;
    p = head;
  }
  p->next = temp;

  return head;
}

int main() {
  return 0;
}
