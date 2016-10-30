/**
* Write a program that outputs the string representation of numbers from 1 to n.
* But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. 
* For numbers which are multiples of both three and five output “FizzBuzz”.
*/
#include <stdlib.h>
#include <stdio.h>

char** fizzBuzz(int n, int* returnSize) {
  *returnSize = n;
  char **ret = malloc(*returnSize * sizeof(char *));
  int ret_idx = 0;
  while(ret_idx < n) {
    ret[ret_idx] = malloc(16 *sizeof(char));
    int num = ret_idx + 1; 
    if (num % 15 == 0) {
      ret[ret_idx] = "FizzBuzz";
    } else if (num % 3 == 0) {
      ret[ret_idx] = "Fizz";
    } else if (num % 5 == 0) {
      ret[ret_idx] = "Buzz";
    } else {
      sprintf(ret[ret_idx], "%d", num);
    }
    
    ret_idx++;
  }

  return ret;
}

int main() {}
