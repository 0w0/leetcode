#include <stdlib.h>
int compare(const void *arg1, const void *arg2) {
  return (*(int *)arg1 - *(int *)arg2);
}

int singleNumber(int* nums, int numsSize) {
  if (numsSize == 1) return nums[0];
 
  qsort(nums,  numsSize, sizeof(int), compare);
  for (int i=0; i<numsSize-1; i++) {
    if (nums[i] == nums[i-1] && nums[i] == nums[i+1]) return nums[i]; // appear over 3 times
    if (nums[i] != nums[i-1] && nums[i] != nums[i+1]) return nums[i]; // appear only 1 time
  }

  return nums[numsSize-1]; // last one
}

int main() {}
