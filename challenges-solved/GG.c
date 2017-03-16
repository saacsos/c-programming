//solve lens create by tanamet
// 5910406124 Narongrit Neewong
#include <stdio.h>
int main()
{
	char ans;
	float f,s,S,a=1,b=1;

	printf("What do you want to find?\n");
	printf("Wanna find : ");
	scanf("%c", & ans);
	if(ans == 'f'){
		printf("Input s = ");
		scanf("%f" ,& s);
		printf("Input S = ");
		scanf("%f", & S);
		f = (s*S)/(S+s);
		printf("f = %.1f", f);
	}
	else if(ans == 's'){
		printf("Input f = ");
		scanf("%f" ,& f);
		printf("Input S = ");
		scanf("%f", & S);
		s = (f*S)/(S-f);
		printf("s = %.1f", s);
	}
	else if(ans == 'S'){
		printf("Input f = ");
		scanf("%f" ,& f);
		printf("Input s = ");
		scanf("%f", & s);
		S = (f*s)/(s-f);
		printf("S = %.1f", S);
	}
}