#include<stdio.h>

int main(void){
  int i;
  for (i = 0; i < 50; i++) {
    if(i%3==0){
      printf("3の倍数\n");
    }
    else if(i%3==1){
      printf("余り1\n");
    }
    else if(i%3==2){
      printf("\n");
    }
  }
  return 0;
}
