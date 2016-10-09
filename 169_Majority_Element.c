int majorityElement(int *nums, int numsSize) {
  int cnt = 0;
  int val = nums[0];
  for (int i = 0; i < numsSize; i++) {
    if (val == nums[i]) cnt++;
    if (val != nums[i]) {
      if (cnt >= 1) {
        cnt--;
        if (cnt == 0) val = nums[1 + i];
      }
    }
  }

  return val;
}
