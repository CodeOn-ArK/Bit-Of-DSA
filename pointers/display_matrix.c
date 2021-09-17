#include<stdint.h>
#include<stdio.h>
#include"display_matrix.h"

void display_matrix(uint32_t **ptr ){
  int i=0,j=0;

  while(i < 3){
    j=0;
    while(j < 3){
      printf("%d\t", *(*(ptr + i)+ j++) );
    }
    i++;
    printf("\n\r");
  }
}
