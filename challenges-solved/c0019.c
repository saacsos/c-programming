//c0019
//Piyanat
#include <stdio.h>
float electricity,charge;
int main() 
{
  printf("Electricity used: ");
  scanf("%f",&electricity);
  if (electricity<0)
    printf("Invalid input");
  else
  {
  if (electricity<=50)
    charge = 0;
  if (electricity>50 && electricity<=100)
    charge = (2.3488*15)+(2.9882*10)+(3.2405*10)+((electricity-35)*3.6237);
  if (electricity>100 && electricity<=150)
    charge = (2.3488*15)+(2.9882*10)+(3.2405*10)+(65*3.6237)+((electricity-100)*3.7171);
  if (electricity>150 && electricity<=400)
    charge = (2.3488*15)+(2.9882*10)+(3.2405*10)+(65*3.6237)+(50*3.7171)+((electricity-150)*4.2218);
  if (electricity>400)
    charge = (2.3488*15)+(2.9882*10)+(3.2405*10)+(65*3.6237)+(50*3.7171)+(250*4.2218)+((electricity-400)*4.4217);
  if (electricity>50)
    charge = charge+8.19;
  printf("Electricity charge: %.2f baht.",charge);
  }
}
