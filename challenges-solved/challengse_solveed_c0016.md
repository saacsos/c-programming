// c0016.md
//เรขาคณิตแสนสนุก ^^

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(){
	char shape, find;

	printf("Enter Shape (Triangle(T/t), Circle(C/c), Square(S/s)): ");
	scanf(" %c", & shape);
	shape = tolower(shape);

	while (shape != 'q'){
		if (shape == 't'){
			float base, height, A, B, C, areas, perimeter;

			printf("What do you want to find? (Area:(A/a), Perimeter(P/p)) : ");
			scanf(" %c", & find);
			find = tolower(find);

			if (find == 'a'){
				printf("Input base : "); scanf("%f", & base);
				printf("Input height : "); scanf("%f", & height);
				areas = 0.5 * base * height;
				printf("Areas = %.2f\n", areas);
			}
			if (find == 'p'){
				printf("Input length of side A : "); scanf("%f", & A);
				printf("Input length of side B : "); scanf("%f", & B);
				printf("Input length of side C : "); scanf("%f", & C);
				perimeter = A + B + C;
				printf("Perimeter = %.2f\n", perimeter);
			}
		}
		else if (shape == 'c'){
			float radius, areas, circumference;

			printf("What do you want to find? (Area:(A/a), Circumference(C/c)) : ");
			scanf(" %c", & find);
			find = tolower(find);

			if (find == 'a'){
				printf("Input radius : "); scanf("%f", & radius);
				areas = M_PI * radius * radius;
				printf("Areas = %.2f\n", areas);
			}
			if (find == 'c'){
				printf("Input radius : "); scanf("%f", & radius);
				circumference = 2 * M_PI * radius;
				printf("Circumference = %.2f\n", circumference);
			}
		}
		else if (shape == 's'){
			float length, areas, perimeter;

			printf("What do you want to find? (Area:(A/a), Perimeter(P/p)) : ");
			scanf(" %c", & find);
			find = tolower(find);

			if (find == 'a'){
				printf("Input length : "); scanf("%f", & length);
				areas = length * length;
				printf("Areas = %.2f\n", areas);
			}
			if (find == 'p'){
				printf("Input length : "); scanf("%f", & length);
				perimeter = 4 * length;
				printf("Perimeter = %.2f\n", perimeter);
			}
		}
		printf("\n");
		printf("Enter Shape (Triangle(T/t), Circle(C/c), Square(S/s)): ");
		scanf(" %c", & shape);
		shape = tolower(shape);
	}
}
