//5910450140
//code : c0029
//by @legoeiei (chattarin pardermwong)
//status : waiting for approval
#include <stdio.h>

int main(){
  int x, i;
  float y=0.00;
  printf("********Nong-suea-ten Village********\n");
  printf(" \n");
  printf("The number of units tap water used: ");
  scanf("%d", &x);
  if (x < 0){
    printf("ERROR\n");
    printf(" \n");
    printf("*****Please enter a new units.******");
  }
  else {
    if (x <= 49){
      y = 20;
    }
    else{
      y = 20.00;
      for(i=50;i<x;i++){
        if(i>=50 && i<=59){
          y += 5.25;
        }
        if(i>=60 && i<=69){
          y += 6.25;
        }
        if(i>=70 && i<=79){
          y += 7.25;
        }
        if(i>=80 && i<=89){
          y += 8.25;
        }
        if(i>=89 && i<=99){
          y += 9.25;
        }
        if(i>=100){
          y += 10.25;
        }
      }
     }
  printf("Tap water charges: %.2f\n", y);
  printf(" \n");
  printf("**************Thank You**************");
   }
}
