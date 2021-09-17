#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>

int main(){
  char str[10] = "good", output_string[10] , ip_string[5];

  printf ("%s %d\n", str, strlen(str));
  printf("Enter a string\t");
  scanf("%s", ip_string);

  uint8_t i = 0;
  while(i < strlen(str)){
    printf("%c %c\n", str[i], *(str + i++));
  }

  strcat(str, ip_string);
  printf("%s\n", str);

  return 0;
}
