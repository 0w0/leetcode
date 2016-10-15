#include <string.h>
char nums[] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I' };
int ints[] =  { 1000, 500, 100, 50, 10, 5, 1 };
int map_to_int(char r) {
  for (int i=0; i < 7; i++) {
    if (r == nums[i]) return ints[i];
  }

  return 0;
}

int romanToInt(char *s) {
  int length = strlen(s);
  if (length == 0 || strcmp(s, "") == 0) return 0;

  int ret = 0;
  for (int i=0; i < length; i++) {
    int current = map_to_int(s[i]);
    int left = map_to_int(s[i-1]);
    if (i > 0 && current > left) {
      ret += current - 2 * left;
    } else {
      ret += current;
    }
  }

  return ret;
}

int main() {
  return 0;
}
