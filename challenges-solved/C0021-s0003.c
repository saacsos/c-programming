// c0021
// by @thititon
// status: waiting for approval

#include <stdio.h>

int main(){
  int flr,all,brk=0,i=0,space;
  printf("-----------------------------------------\nHow many floors do you want to build?:");
  scanf("%d",&flr);
  printf("-----------------------------------------\n");
  for(i=0;i<flr;i++){
    for(space=flr-i+1;space!=0;space--)
      printf(" ");
    printf("=");

    all+=1;
    for(brk=i;brk!=0;brk--){
      printf("==");
      all+=2;
    }
    printf("\n");
  }
  printf("Number of bricks required: %d",all);

  //1025  c0021

}
