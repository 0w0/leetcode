int climbStairs(int n) {
  if (n <= 1) return 1;

  int prev = 1;
  int cur = 1;
  int temp;
  for(int i=2; i<=n; i++) {
    temp = cur;
    cur = cur + prev;
    prev = temp; 
  }

  return cur;
}

int main() {

}
