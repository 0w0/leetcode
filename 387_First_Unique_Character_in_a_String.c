int firstUniqChar(char* s) {
  int s_len = strlen(s);
  int i = 0;
  char passed[26] = "";
  int passed_idx = 0;
  while (i < s_len) {
    // Check if is checked
    int is_passed = 0;
    for (int k=0; k<strlen(passed); k++) {
      if (s[i] == passed[k]) {
        is_passed = 1;
        break;
      }
    }
    if (is_passed == 1) {
      i++;
      continue;
    }

    int is_uni = 1;
    for (int j=0; j<s_len; j++) {
      if (i ==j ) continue;
      if (s[i] == s[j]) is_uni = 0; 
    }
    // Match s[i] is uniq
    if (is_uni == 1) return i;
    
    passed[passed_idx] = s[i];
    passed_idx++;
    i++;
  }

  return -1;
}
