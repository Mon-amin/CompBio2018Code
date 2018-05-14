#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int r,i,M,N,x,k;
  srand(time(NULL)+k);
  M=1;
  N=6;
  x=0;

 for(k=0;k<5;k++){
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
     printf("%d ,%d\n",k,i);
     break;
    }

  }
 }
 return 0;
}
