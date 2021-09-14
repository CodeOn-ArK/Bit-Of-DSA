#include<stdio.h>
#include<stdint.h>

void display(uint32_t *head);

int main(){
  uint32_t head[]={1,2,3,4,5,6};
  display(head);

  return 0;
}

void display(uint32_t *head){
  uint8_t i=0;

  while(head[i] <= 6){
    printf("head[%d] -->%d\t", i, head[i++]);
  }
  printf("\n\r");

}
