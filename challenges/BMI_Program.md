#include<stdio.h>
int main()
{
    int w;
    float h, hm ,bmi;
printf("Body Mass Index Program(BMI)\n");
printf("Input Your Weight(kg.): ");
scanf("%d",&w);
printf("Input Your Height(cm.): ");
scanf("%f",&h);
hm = h/100;
bmi = w/(hm*hm);
printf("Your BMI: %.2f\n",bmi);
if(bmi >=0){
    if (bmi<18.5){
        printf("Underweight");
    }
    else if (bmi<=24.9)
    {
        printf("Normal weigh");
    }
    else if (bmi<=29.9)
    {
        printf("Overweight");
    }
    else if (bmi>=30)
    {
        printf("Obesity");
    }
}
}


