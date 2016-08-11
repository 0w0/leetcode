void moveZeroes(int* nums, int numsSize) {
  int temp, i, len;
  len = numsSize;
  for (i = 0; i < numsSize; i++) {
    if (nums[i] == 0) {
      temp = nums[i];
      int j = i + 1;
      while(nums[j] == 0) { 
        j++; 
      }

      if (j <= len - 1) {
        nums[i] = nums[j];
        nums[j] = temp;
      } 
    }
  }
}