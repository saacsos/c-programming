//c0004
//by robinker
#include <stdio.h>
int main()
{
	float f , s, S;
	char input;
	printf("What do you want to find?");
	printf("Wanna find : ");
	scanf("%c", &input);
	// Find F
	if (input == 'f')
	{
		printf("Input s = ");
		scanf("%f", &s);
		printf("Input S = ");
		scanf("%f", &S);
		f = S*s/(S+s);	
		printf("f = %.1f", f);
	}
	// Find s
	else if(input == 's')
	{
		printf("Input f = ");
		scanf("%f", &f);
		printf("Input S = ");
		scanf("%f", &S);
		s = f*S / (S-f);
		printf("s = %.01f", s);
	}
	//Find S
	else if(input == 'S')
	{
		printf("Input f = ");
		scanf("%f", &f);
		printf("Input s = ");
		scanf("%f", &s);
		S = f*s / (s-f);
		printf("s = %.01f", S);
	}
}
