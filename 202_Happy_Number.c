// If the sum of squer loot is number 4, it will loop forever.
bool isHappy(int n) {
  while(n != 4) {
    if (n == 1) return true;
    
    int next = 0;
    while (n) {
      next += (n % 10) * (n % 10);
      n /= 10;
    }
    n = next;
  }

  return false;    
}
