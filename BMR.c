#include <stdio.h>
void main() 
{
    float w , h , age ,bmr;
    char sex ;
    printf("Enter your sex :");
    scanf("%s",&sex);
    printf("Enter your weight:");
    scanf("%f",&w);
    printf("Enter your height :");
    scanf("%f",&h);
    printf("Enter your age :");
    scanf("%f",&age);
    if (sex!='m'||sex!='M'||sex!='f'||sex!='F'||w<0||h<0||age<0){
      printf("ERROR");
    }
    else if(sex == 'm' || sex == 'M'){
      bmr = 66+(13.7*w)+(5*h)-(6.8*age) ;
      printf("Your BMR is %.2f",bmr);
    }
    else if (sex == 'f' || sex == 'F'){
      bmr = 665+(9.6*w)+(1.8*h)-(4.7*age) ;
      printf("Your BMR is %.2f kcal.",bmr) ;
    }
    
    
}
