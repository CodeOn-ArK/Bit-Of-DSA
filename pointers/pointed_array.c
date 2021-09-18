#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"display_matrix.h"

/*
 * Compile by
 * gcc -c pointed_array.c 
 * gcc -c display_matrix.c 
 *
 * gcc pointed_array.o display_matrix.o -o final.o
 * To execute
 * ./final.o
 */
void display_matrix(uint32_t **);

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

 printf("\t (ptr2ptr)   *(ptr2ptr)    **(ptr2ptr)\n\r");
 while(i < 3){
   j=0;
   while(j < 3){
      printf("j=%d, i=%d, %x,\t %x,\t %d\t\t",j,i, (ptr2ptr) + i, *(ptr2ptr+i) +j, *(*(ptr2ptr+i) + j) );
      scanf("%d", (*(ptr2ptr+i) + j));
      j++;
   }

   i++;
   printf("\n\r");
 }

 printf("\n\r");
 i=0;

 while(i < 3){
   j=0;
   while(j < 3){
      printf("j=%d, i=%d, %x,\t %x,\t %d\n",j,i, (ptr2ptr) , *(ptr2ptr) , *(*(ptr2ptr)) );
      (*ptr2ptr)++;
      j++;
   }
   (*ptr2ptr) -= 3;

   ptr2ptr++;
   i++;
   printf("\n\r");
 }

 ptr2ptr = head;
 display_matrix(ptr2ptr);
 return 0;
}


