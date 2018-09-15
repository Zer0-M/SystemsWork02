#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  unsigned int i=  ((int)(pow(2,31))+1);
  char *ip = &i;

  printf("unsigned int:%u\n",i);
  printf("char pointer:%p\n",ip);
  printf("unsigned int in hex:%x\n",i);
}
