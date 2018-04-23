#include<stdio.h>

int main(void) {
 int i;
 for(i=0; i<10; i++){
   printf("%d\n", i);
   if(i>5){
     printf("iは5より大きい\n");
   }
   if(i==3){
     printf("iは3と等しい\n");
   }
   if((i>=3)&&(i<=6)){
     printf("iは3以上6以下\n");
   }
   if ((!i==1||i==2)) {
     printf("iは1または2ではない\n");
   }
 }

  return 0;
}
