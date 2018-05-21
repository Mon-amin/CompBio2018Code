#include<stdio.h>

int main(void){

  double β,γ,S,SS,I,II,R,RR,t,dt;
  int i;
  FILE *fp;

  fp=fopen("6-4.dat","w");

  β=1.5;
  γ=0.2;
  S=0.99;
  I=0.01;
  R=0.00;
  t=0.00;
  dt=0.01;

  for(i=0; i<100; i++){
    SS=S+dt*(-β*S*I);
    II=I+dt*(β*S*I-γ*I);
    RR=R+dt*γ*I;
    S=SS;
    I=II;
    R=RR;
    if(i%1000==0){
      fprintf(fp,"%f,%f,%f,%f\n",t,S,I,R);
    }
    t+=dt;
    fclose(fp);
  }
  return 0;
}
