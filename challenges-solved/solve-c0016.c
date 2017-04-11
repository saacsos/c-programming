#include <stdio.h>
#include <math.h>
int main()
{
	char shape, find;
	float area, perimeter, circumference;
	int base, height, radius, length, lenght_a, lenght_b, lenght_c;
	while(1) {
		printf("Enter Shape (Triangle(T/t), Circle(C/c), Square(S/s)): ");
		scanf("\n%c", &shape);
		if(shape == 'T' || shape == 't' ) {
			printf("What do you want to find? (Area:(A/a), Perimeter(P/p)) : ");
			scanf("\n%c", &find);
			if(find == 'A' || find == 'a') {
				printf("Input base : ");
				scanf("%d", &base);
				printf("Input height : ");
				scanf("%d", &heigaht);
				area = (base*height)/2.0;
				printf("Areas = %.2f\n\n", area);
			}
			else {
				printf("Input length of side A : ");
				scanf("%d", &lenght_a);
				printf("Input length of side B : ");
				scanf("%d", &lenght_b);
				printf("Input length of side C : ");
				scanf("%d", &lenght_c);
				perimeter = lenght_a+lenght_b+lenght_c;
				printf("Perimeter = %.2f\n\n", perimeter);
			}
		}
		else if(shape == 'C' || shape == 'c' ) {
			printf("What do you want to find? (Area:(A/a), Perimeter(P/p)) : ");
			scanf("\n%c", &find);
			printf("Input radius : ");
			scanf("%d", &radius);
			if(find == 'A' || find == 'a') {
				area = M_PI*radius*radius;
				printf("Areas = %.2f\n\n", area);

			}
			else {
				perimeter = 2*M_PI*radius;
				printf("Perimeter = %.2f\n\n", perimeter);
			}
		}
		else if(shape == 'S' || shape == 's' ) {
			printf("What do you want to find? (Area:(A/a), Circumference(C/c) : ");
			scanf("\n%c", &find); 
			printf("Input length : ");
			scanf("%d", &length);
			if(find == 'A' || find == 'a') {
				area = length*length;
				printf("Areas = %.2f\n\n", area);
			}
			else {
				circumference = length*4;
				printf("Circumference = %.2f\n\n", circumference);
			}
		}
		else {
			break;
		}
	}
}