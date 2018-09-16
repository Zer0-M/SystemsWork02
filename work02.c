#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  //Part 1
  unsigned int x=  ((int)(pow(10,9))*2.5);
  //Part 2
  char *xp = &x;

  printf("unsigned int:%u\n",x);
  printf("char pointer:%p\n",xp);
  //Part 3
  printf("unsigned int in hex:%x\n",x);
  //Part 4
  printf("bytes in hex:\n");
  for(int i=0;i<sizeof(i);i++){
    printf("%d:%hhx\n",i,*xp);
    xp++;//Incrementation by byte(char = 1 byte)
  }
  x=  ((int)(pow(10,9))*2.5);//Values being reset
  xp = &x;

  //Part 5
  //Sub-part 1
  for(int i=0;i<sizeof(i);i++){
    *xp+=1;//Incrementation of dereferenced value
    xp++;
  }
  printf("unsigned after incrementation by 1:%u\n",x);
  printf("unsigned after incrementation by 1 in hex:%x\n",x);
  //Sub-part 2
  x=  ((int)(pow(10,9))*2.5);
  xp = &x;
  for(int i=0;i<sizeof(i);i++){
    *xp+=16;
    xp++;
  }
  printf("unsigned after incrementation by 16:%u\n",x);
  printf("unsigned after incrementation by 16 in hex:%x\n",x);




}
