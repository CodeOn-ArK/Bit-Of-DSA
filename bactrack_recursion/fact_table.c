#include"factorial.h"

static void intro(void);
char response = 'n';

void display_factorial_table(uint16_t num){
 intro();

 uint32_t fact=0;
 while(num > 0){
   if(response == 'n' ){
    fact = factorial(num) ;
    printf("\t\t%d\t\t|\t\t%ld\n\r", num--, fact);
   }
   else{
     static uint16_t i = 0;
    fact = factorial(i) ;
    printf("\t\t%d\t\t|\t\t%ld\n\r", (i++), fact);
    num--;
   }
 }
}

static void intro(void){
  printf("\nReverse the list? (Y/n )\t");
  scanf("\n%c", &response);
  printf("\n-+-+-+-+-+-+-+-+-+This Function prints Factorial Table -+-+-+-+-+-+-+-+-+-+-+\n");
  printf("\t\tNUM\t\t|\t\tFactorial(NUM)\n\r");
  printf("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n\r");
  
}
