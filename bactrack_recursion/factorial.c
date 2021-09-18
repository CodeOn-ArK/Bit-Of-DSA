#include"factorial.h"

int main(){
  uint16_t num;

  printf("Enter the number\n\r");
  scanf("%d", &num);

  printf("\nThe factorial of the number %d is %ld\n\r", num, factorial(num));
  display_factorial_table(num);
  
  return 0;
}
