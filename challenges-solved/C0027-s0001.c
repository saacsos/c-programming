// c0027
// by @thititon
// status: waiting for approval
#include<stdio.h>

int main(){
  int month[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,m,d,day,sta=0;
  printf("input : ");
  scanf("%d",&day);
  d=day;
  if (day<1 || day>365){
    sta=1;
    printf("output : Error.");
  }
  else{
    for(i=0,m=1;i<12;i++){
      if (d-month[i]>0){
        d=d-month[i];
        m++;
      }
      else
        break;
    }
    printf("output : %02d/%02d/60\n",d,m);


    if((day-1)%30==0){
      sta=1;
      printf("Full Moon Phase.");
    }

    else if((day-9)%30==0){
      sta=1;
      printf("Third Quarter Phase");
    }
    else if((day-16)%30==0){
      sta=1;
      printf("NEW Moon Phase.");
    }
    else if ((day-24)%30==0){
      sta=1;
      printf("First Quarter Phase.");
    }

  }
  if (sta!=1){
    day=day%31;

    if ((day>0&&day<10)||(day>=9&&day<=16))
      printf("The moon is waning.");
    else if((day>=16&&day<=24)||(day>=24&&day<=31))
      printf("The moon is waxing.");
  }


}
