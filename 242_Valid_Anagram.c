#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int compare_str(const void *a,const void *b) {
  return (strcmp((char *)a,(char *)b));
}

bool isAnagram(char* s, char* t) {
  int t_len = strlen(t);
  qsort(t, t_len, sizeof(char), compare_str);
  int s_len = strlen(s);
  qsort(s, s_len, sizeof(char), compare_str);
  if (s_len != t_len) return false;

  return strcmp(s, t) == 0 ? true : false;
}

int main() {
  return 0;
}
