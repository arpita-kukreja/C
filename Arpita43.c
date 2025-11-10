#include <stdio.h>
//WAP to create a recursive function to implement the Ackerman
int ackermann(int m, int n) {
  if (m == 0) {
    return n + 1;
  } else if (n == 0) {
    return ackermann(m - 1, 1);
  } else {
    return ackermann(m - 1, ackermann(m, n - 1));
  }
}
 int main() {
  int m , n;
  printf("Enter two numbers:");
  scanf("%d%d",&m,&n);
  int result = ackermann(m, n);
  printf("The result for the Ackermann function for m=%d and n=%d is %d\n",m, n, result);
  return 0;
}