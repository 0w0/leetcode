#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
  *returnSize = 0;
  int *ret = malloc(*returnSize * sizeof(int));
  int retIdx = 0;
  for (int i = 0; i < nums1Size; i++) {
    int same_in_num2 = 0;
    int same_in_ret = 0;
    for (int j = 0; j < nums2Size; j++) {
      if (nums1[i] == nums2[j]) {
        same_in_num2++;
        for (int k = 0; k < *returnSize; k++) {
          if (nums1[i] == ret[k]) {
            same_in_ret++;
          }
        }
        if (same_in_num2 <= same_in_ret) continue;

        // Realloc ret
        *returnSize = *returnSize + 1;
        ret = realloc(ret, sizeof(int) * *returnSize);
        ret[retIdx] = nums1[i];
        retIdx++;
        break;
      } 
    }
  }

  return ret;
}

int main() {
  return 0;
}
