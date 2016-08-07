char* reverseString(char* s) {
  if (s == NULL || s[0] == '\0') return s;

  char temp;
  size_t len = strlen(s) - 1;
  size_t end = len / 2;
  size_t i, j;
  
  for (i = 0, j = len; i <= end; i++, j--) {
    temp = s[j];
	s[j] = s[i];
	s[i] = temp;
  }

  return s;
}
