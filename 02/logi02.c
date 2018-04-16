#include <stdio.h>
int main(void){
 int t;
 double r,k,x,xx;
 k=100;
 FILE *fp;
 fp=fopen("output02.dat","a");

for(r=1.0; r<3.0; r=r+0.1){
x=0;
 for(t=0; t<300; t++){
  xx=x+r*(1-x/k)*x;
  fprintf(fp, "%f, %d, %f\n",r, t, xx);
   x=xx;
 }
}
fclose(fp);
return 0;
}
