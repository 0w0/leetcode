int maxProfit(int* prices, int pricesSize) {
  int profit = 0;
  int min_val = prices[0];
  for (int i=0; i<pricesSize; i++) {
    if (prices[i] < min_val) min_val = prices[i];
    int count_profit = prices[i] - min_val;
    if (count_profit > profit) profit = count_profit;  
  }
  
  return profit;
}

int main() {

}
