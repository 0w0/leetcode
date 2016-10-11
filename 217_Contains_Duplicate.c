// O(n^2)
// bool containsDuplicate(int *nums, int numsSize) {
//   int i, j;
//   for (i = 0; i < numsSize; i++) {
//     for (j = i + 1; j < numsSize; j++) {
//       if (nums[i] == nums[j]) return true;
//     }
//   }

//   return false;
// }

// O(n*longn)
// Lot faster than n is VERY large
int compare_int (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

bool containsDuplicate(int *nums, int numsSize) {
  if(nums == NULL || numsSize <= 1) return false;
 
  qsort(nums, numsSize, sizeof(int), compare_int);
  int i;
  for (i = 0; i < numsSize; i++) {
    if (nums[i] == nums[i+1]) return true;
  }

  return false;
}
