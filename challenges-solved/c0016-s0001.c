// c0016
// by @vitaminadek
// status: waiting for approval
#include <stdio.h>
#include <math.h>

void main()
{
	char shape,find;
	float a,b,c,area,per,cir;

	while(1)
	{
		printf("Enter Shape (Triangle(T/t), Circle(C/c), Square(S/s)): ");
		scanf(" %c",&shape);
		if (shape=='q'||shape=='Q')
			break;
		printf("What do you want to find? (Area:(A/a), Perimeter(P/p)) : ");
		scanf(" %c",&find);
		if (shape=='t'||shape=='T')
		{
			if (find=='a'||find=='A')
			{
				printf("Input base : ");
				scanf("%f",&a);
				printf("Input height : ");
				scanf("%f",&b);
				area = 0.5*a*b;
				printf("Areas = %.2f",area);
			}
			else if (find=='p'||find=='P')
			{
				printf("Input length of side A : ");
				scanf("%f",&a);
				printf("Input length of side B : ");
				scanf("%f",&b);
				printf("Input length of side C : ");
				scanf("%f",&c);
				per = a+b+c;
				printf("Perimeter = %.2f",per);
			}
		}
		else if (shape=='c'||shape=='C')
		{
			if (find=='a'||find=='A')
			{
				printf("Input radius :  ");
				scanf("%f",&a);
				area = M_PI*a*a;
				printf("Areas = %.2f",area);
			}
			else if (find=='p'||find=='P')
			{
				printf("Input radius :  ");
				scanf("%f",&a);
				per = 2*M_PI*a;
				printf("Circumference = %.2f",per);
			}
		}
		else if (shape=='s'||shape=='S')
		{
			if (find=='a'||find=='A')
			{
				printf("Input length : ");
				scanf("%f",&a);
				area = a*a;
				printf("Areas = %.2f",area);
			}
			else if (find=='p'||find=='P')
			{
				printf("Input length : ");
				scanf("%f",&a);
				per = 4*a;
				printf("Perimeter = %.2f",per);
			}
		}
		printf("\n\n");
	}

}
