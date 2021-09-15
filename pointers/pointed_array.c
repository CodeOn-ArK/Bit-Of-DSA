#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

int main(){
  uint32_t **ptr2ptr = NULL, *ptr = NULL, **head = NULL;

 ptr2ptr = (uint32_t **)malloc(3*sizeof(uint32_t *));
 head = ptr2ptr;

 uint8_t i=0, j=0;
 while(i < 3){
   *ptr2ptr = (uint32_t *)malloc(3*sizeof(uint32_t ));
   *ptr2ptr++;
   i++;   
 }

 i=0;
 ptr2ptr = head;

 while(i < 3){
   j=0;
   while(j < 3){
      printf("%d, %x, %x\t",j, (*ptr2ptr), ptr2ptr);
      scanf("%d", (**ptr2ptr));
      (*ptr2ptr)++;
      j++;
   }

   ptr2ptr++;
   i++;

   printf("\n\r");
 }


 return 0;

}


