//c0013 Lucky LOTTERY//
// by @supharom
// status: waiting for approval
#include <stdio.h>
int main()
{
int i,num,one,bi,total,n,in,count;
printf("1st prize: ");
scanf("%d",&one);
printf("your number: ");
scanf("%d",&num);
printf("How many: ");
scanf("%d",&bi);
if (one==num)
{
  printf("win 1st prize %d baht",bi*2000000 );
}
else if (one==num+1 || one==num-1)
{
  printf("win 2nd prize %d baht",bi*100000);
}
else if ((one!=num) && (one!=num+1 || one!=num-1)){
    int cnt=0;
    while (one>0 && num>0)
      {
        n=num%10;
        num=num/10;
        in=one%10;
        one=one/10;
        if(n==in)
        {
          count=++cnt;
        }
      }
          if(count==3){
            printf("win 3rd prize %d baht",bi*2000 );
          }
          else if (count==2)
          {
            printf("win 4h prize %d baht",bi*1000 );
        }
else
    printf("Next time will be your turn MAY THE FORCE BE WITH YOU");

    }
}
