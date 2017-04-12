// code c0009
// by @eakeakarat
// status: approved by @Narongrit634
#include <stdio.h>
#include <math.h>
void main()
{
    float   max=0 ,s, min=100000 , avg , md , total=0;
    int num , i;
    double x ;
    printf("number of student: ");
    scanf("%d",&num);
    float score[num];
    for (i=1;i<=num;i++){
      printf("Score#%d = ",i);
      scanf("%f",&s);
      score[i] = s ;
      total += score[i] ;
      if (max<s){
        max = s ;
      }
      if (min>s){
        min = s ;
      }
    }
    avg = total/num ;
    for (i=1;i<=num;i++){
      x = sqrt((score[i]-avg)*(score[i]-avg));
      md += x ;
      printf("%lf\n",x);
    }
    printf("%f\n",md);
    md = md/num;
    printf("Max score = %.2f\n",max);
    printf("Min score = %.2f\n",min);
    printf("Average score = %.2f\n",avg);
    printf("M.D. = %.2f\n",md);

}
