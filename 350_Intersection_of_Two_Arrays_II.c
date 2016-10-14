int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
  *returnSize = 0;
  int *ret = malloc(*returnSize * sizeof(int));
  int retIdx = 0;
  for (int i = 0; i < nums1Size; i++) {
    int same_in_num1 = 0;
    for (int l = 0; l < nums1Size; l++) {
      if (nums1[i] == nums1[l]) same_in_num1++;
    }
    int same_in_num2 = 0;
    for (int j = 0; j < nums2Size; j++) {
      if (nums1[i] == nums2[j]) {
        same_in_num2++;
        int same_in_ret = 0;
        for (int k = 0; k < *returnSize; k++) {
          if (nums1[i] == ret[k]) same_in_ret++;
        }
        int at_least = same_in_num1 > same_in_num2 ? same_in_num2 : same_in_num1;
        if (same_in_ret >= at_least) continue;

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
