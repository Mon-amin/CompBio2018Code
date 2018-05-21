#include<stdio.h>

int main(void){

  double beta,gamma,S,SS,I,II,R,RR,t,dt;
  int i;
  FILE *fp;

  fp=fopen("6-4.dat","w");

  beta=1.5;
  gamma=0.4;
  S=0.90;
  I=0.10;
  R=0.00;
  t=0.00;
  dt=0.001;

  for(i=0; i<1000; i++){
    SS=S+dt*(-beta*S*I);
    II=I+dt*(beta*S*I-gamma*I);
    RR=R+dt*gamma*I;
    S=SS;
    I=II;
    R=RR;
    if(i%1000==0){
      fprintf(fp,"%f,%f,%f,%f\n",t,S,I,R);
    }
    t+=dt;
  }
  fclose(fp);
  return 0;
}
