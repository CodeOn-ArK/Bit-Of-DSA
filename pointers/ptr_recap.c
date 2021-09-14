#include<stdio.h>
#include<ctype.h>
#include<stdint.h>

uint32_t intu(uint32_t *p);

uint32_t main(){
  uint32_t *p, a;
  a = 20;
  p = &a;
  printf("\n\rp --> %#X\n\r *p --> %d\n\r &p --> %#X\n\r &a --> %#X\n\r a --> %d\n\r", p, *p, &p, &a, a);

  uint32_t hello = intu(p);
  printf("%d\n\r" , hello);

  return 1;
}

uint32_t intu(uint32_t *p){
  printf("\n\rWithin function\n\r *p --> %d\n\r", *p);
  p--;
  printf("\n\rincrementing p\n\r *p --> %d\n\r", *p);
  return *p;
  
}
