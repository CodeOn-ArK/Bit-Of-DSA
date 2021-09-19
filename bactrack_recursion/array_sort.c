#include<stdio.h>

#define SUCCESS 1
#define FAILURE 0
static int check_sort(int* a);
static int GLOBAL_VAR, val = 0;

int main(){
  int a[10];
 printf("\nEnter the array size\n");
 scanf("%d", &GLOBAL_VAR);
 printf("\nEnter the array\n") ;

 int i = 0;
 while(i < GLOBAL_VAR){
  scanf("%d", &a[i++]) ;
 }
 (check_sort(a) == SUCCESS)? printf("Sorted array\n"): printf("Unsorted Array\n");

 return 0;
}

int check_sort(int a[]){

  if(GLOBAL_VAR == 1)
    return 1;
  return (a[GLOBAL_VAR-1] < a[GLOBAL_VAR-- -2])?0: check_sort(a);
}
