#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int r,t,i;
  int x[5];
  srand(time(NULL));
  for(t=0;t<5;t++){
    x[t]=0;
  }
  FILE *fp;

  fp=fopen("5-c.dat","w");

  for(i=0;i<100;i++){
    for(t=0;t<5;t++){
      r=rand()%2;
      if(r==0){
        x[t]=x[t]+1;
      }
      else{
        x[t]=x[t]-1;
      }
      fprintf(fp,"%d",x[t]);
    }
    fprintf(fp,"\n");
    }
  fclose(fp);
  return 0;
}
