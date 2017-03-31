// code c0004
// by @junielism
// status: Approved by @Tanamet
#include <stdio.h>
int main(){
	float f,s,S;
	char cha;
	printf("What do you want to find?\n");
	printf("Wanna find : ");
	scanf("%c",&cha);
	if(cha == 'f'){
	printf("Input s = ");
	scanf("%f",&s);
	printf("Input S = ");
	scanf("%f",&S);
	f = 1/(1/s+1/S);
	printf("%c = %.1f",cha,f);
	}
	else if(cha == 's'){
	printf("Input f = ");
	scanf("%f",&f);
	printf("Input S = ");
	scanf("%f",&S);
	s=1.0/((S-f)/(f*S));
	printf("%c = %.1f",cha,s);
	}
	else if(cha == 'S'){
	printf("Input f = ");
	scanf("%f",&f);
	printf("Input s = ");
	scanf("%f",&s);
	S = 1.0/((s-f)/(f*s));
	printf("%c = %.1f",cha,S);
	}

}
