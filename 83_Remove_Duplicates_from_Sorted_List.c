#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
  if (!head || !head->next) return head;

  struct ListNode *current = head;
  while (current->next != NULL) {
    if (current->val == current->next->val) {
      current->next = current->next->next;
    } else {
      current = current->next;
    }
  }

  return head;
}

int main() {
  struct ListNode *test_2 = {2, NULL};
  struct ListNode *test_1 = {1, test_2};
  // struct ListNode *test_1_1 = {1, test_1};
  struct ListNode *test_0 = {0, test_1};

  deleteDuplicates(test_0);

}
