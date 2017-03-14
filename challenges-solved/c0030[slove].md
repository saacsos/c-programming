// c0030
// by @Supaphol
// status: waiting for approval

#include <stdio.h>

int main()
{
  int degree,con,constant,i,j;
  printf("Input the maximum degree: ");
  scanf("%d",&degree);
  if (degree > 0)
  {
  int x[degree];
  for (i=degree,j=0;i>0;i--,j++)
  {
    printf("Enter the coefficient of x^%d: ",i);
    scanf("%d",&con);
    x[j] = con;
  }
  printf("Enter the constant: ");
  scanf("%d",&constant);
  printf("f(x) = ");
  
  for (i=degree,j=0;i>0;i--,j++)
   {
    if(x[j] !=1 && x[j] != 0 && x[j] != -1)
    printf("%dx",x[j]); // 5x
    
    else if(x[j] != 0 && (x[j] == 1 || x[j] == -1 ) && i != 1)
      printf("x",x[j]);
      
    else if(x[j] == 1 && i == 1)
    printf("x"); // x
    
    else if(x[j] == -1 && i== 1)
    printf("-x");// -x
    
    if (i !=1 && x[j] != 0)
     printf("^%d ",i);
    if (i == 1 && x[j] != 0)
    printf(" ");
    if( x[j+1]  >0 && i!= 1)
      printf("+");
    else if(i== 1 && constant > 0 )
      printf("+");

   }
   if (constant != 0)
   printf("%d",constant);
  printf("\n");
printf("f'(x) = ");
   
  for (i = degree ,j=0;i>0;i--,j++)
  {
    x[j] = x[j]*i;
  }
  int count= degree-1;
  for (i=degree,j=0;i>0;i--,j++)
   {
    if(x[j] !=1 && x[j] != 0 && x[j] != -1)
    printf("%d",x[j]); // 5
    
    if((x[j] > 0|| x[j]<0) && ( x[j] != 1 || x[j] != -1 ) && count >0)
      printf("x",x[j]); // x
      
    else if(x[j] == 1 )
    printf("x");
    
    else if(x[j] == -1)
    printf("-x");
    
    if (count >1 && x[j] != 0)
     printf("^%d ",count);
    if (i == 2 && x[j] != 0)
    printf(" ");
    if( x[j+1]  >0 &&  count != 0)
      printf("+");
    count--;
   }
  }
}
