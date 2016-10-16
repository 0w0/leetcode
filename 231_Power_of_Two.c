bool isPowerOfTwo(int n) {
  while (n && n % 2 == 0) {
    n /= 2;
  }
  
  return n == 1;
}
