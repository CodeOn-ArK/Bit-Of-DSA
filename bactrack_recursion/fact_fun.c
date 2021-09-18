#include"factorial.h"

long int factorial(uint16_t num){
  if(num == 0)
    return 1;
  else if(num == 1)
    return 1;
  else
    return num*factorial(num - 1);
}
