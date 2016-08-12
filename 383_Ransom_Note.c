#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool canConstruct(char* ransomNote, char* magazine) {
  int n_len = strlen(ransomNote);
  int m_len = strlen(magazine);
  char m[m_len];
  strcpy(m, magazine);

  int match = 0;
  char skip[] = {" "};
  for (int i = 0; i < n_len; i++) {
    for (int j = 0; j < m_len; j++) {
      if (ransomNote[i] == m[j]) {
        match++;
        m[j] = skip[0];
        break;
      }
    }
  }

  return n_len == match;
}

int main() {
  char *test_a = "ab";
  char *test_b = "bba";
  bool ans  = canConstruct(test_a, test_b);
  printf("%s", ans ? "true" : "false");

  return 0;
}
