#include <stdio.h>
int main(){
	char wanna;
	printf("What do you want to find?\nWanna find : ");
	scanf("%c",&wanna );
	float s, S, f;
	switch (wanna){
		case 'f':
			printf("Input s = "); scanf("%f",&s);
			printf("Input S = "); scanf("%f",&S);
			f = 1/((1/s) + (1/S));
			printf("f = %.1f\n",f);
			break;
		case 's':
			printf("Input f = "); scanf("%f",&f);
			printf("Input S = "); scanf("%f",&S);
			s = 1/((1/f) - (1/S));
			printf("s = %.0f\n",s);
			break;
		case 'S':
		    printf("Input f = "); scanf("%f",&f);
			printf("Input s = "); scanf("%f",&s);
			S = 1/((1/f) - (1/s));
			printf("S = %.0f\n",S);
			break;
		default :
			printf("default YYYY\n");
	}
	return 0;
}