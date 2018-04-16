#include <stdio.h>
int main(void){
 int t;
 double r,k,x,xx;
 k=100
 FILE *fp;
 fp=fopen("output.dat","a");

for(r=1.0; r<3.0; r=r+0.1;){
 for(t=0; t<300; t++){
  xx=x+r*(1-x/k)*x;
  fprintf(fp, "%d, %f\n", t, xx);
   x=xx;
 }
}
fclose(fp);
return 0;
}
