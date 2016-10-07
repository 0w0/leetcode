#include <string.h>
#include <math.h>
int titleToNumber(char* s) {
  int ans = 0;
  int exp = 0;
  for (size_t i=strlen(s); i>0; i--) {
    int ascii_int = (int)s[i-1] - 64;
    int mutiply = (int)pow(26, exp++);
    ans += ascii_int * mutiply;
  }
  
  return ans;
}
