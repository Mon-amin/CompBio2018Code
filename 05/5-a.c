#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int r,i,M,N,x,k,t;
  int n=10; //試行回数
  double ave;
  srand(time(NULL));
  M=1;
  N=6;
  x=0;
  t=0;

printf("n=%d\n", n); //回数ｎの記載

 for(k=0;k<n;k++){
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
     printf("%d",i);
     t+=i;
     x=0;
     break;
    }
  }
 }
 printf("\n"); //回数の記載
 ave=(double)t/n;
 printf("%f\n", ave); //平均値の記載

 return 0;
}
