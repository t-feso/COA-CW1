// A C function that takes two inputs (n and k) and outputs the solution
#include<stdio.h>

int main(){
  int a, b, c, n, k;
  int f1 = 1;
  int f2 = 1;
  int f3 = 1;

  // This prints out the intruction to store input a value, n.
  printf("Please input the first binomial coefficients, n: \n");
  // This stores the inputted value of n.
  scanf("%d", &n);

  // This while loop takes care of error cases for the first input, n.
  while (n <= 0){
    // In the loop, the enter input statement is repeated and the value is properly assigned
    printf("Please re-enter 'n', it is meant to be a positive integer, greater than 'k':\n");
    scanf("%d", &n);
  }
  // This obtains the solution for n!
  for (a = 1; a <= n; a++)
    f1 *= a;

  // This prints out the intruction to store input a value, k.
  printf("Please input the second binomial coefficients, k: \n");
  // This stores the inputted value of k
  scanf("%d", &k);

  // This while loop takes care of error cases for the second input, k.
  while (k <= 0 || k > n){
    // In the loop, the enter input statement is repeated and the value is properly assigned
    printf("Please re-enter 'k', it is meant to be a positive integer, less than 'n':\n");
    scanf("%d", &k);
  }

  // This obtains the solution for k!
  for (b = 1; b <= k; b++)
    f2 *= b;

  // This obtains the solution for (n - k)!
  for (c = 1; c <= n-k; c++)
    f3 *= c;

    // The calculates the correct solution to the equation using factorials
    int coefficient = (f1/(f2*f3));

    // This prints out the final string that displays the solution to the equation
    printf("Value of C(%d, %d) is %d ", n, k, coefficient);


  // This iterates through the rows of Pascal's Triangle until it reaches the desired row, r.
  for (int row = 1; row <= s; row++){
      int C = 1; // used to represent C(line, i)
      for (int i = 1; i <= row; i++)
      {
      printf("%d ", C); // The first value in a line is always 1
      C = C * (row - i) / i;
      }
      printf("\n");

      scanf("%d", &s);
 
  // This "return 0" command tells the programme where to stop.
  return 0;
}
