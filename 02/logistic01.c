#include <stdio.h>
int main(void){
 int t,xx;
 FILE *fp;
 fp=fopen("output.dat","a");
 fprintf(fp, "%d, %d", 0, x0);

 for(t=0; t<300; t++){
  xx=x+r*(1-(double)x/k)*x;
  fprintf(fp, "%d, %d", t, xx);
   x=xx
 }

fclose(fp);
return 0;
}
