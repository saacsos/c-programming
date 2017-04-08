//by @ongreverze
//code: c0020

#include <stdio.h>

int main(){
	char c;
	float d,t,s,Speed,Distance;
	int Time;
	printf("[v]:Speed [s]:Distance [t]:Time");
	printf("\nInput Command: ");
	scanf("%c",&c);
	if (c=='v' || c=='V'){
		printf("Input a Distance: ");
		scanf("%f",&d);
		printf("Input a Time: ");
		scanf("%f",&t);
		if (d==0 || t==0){
			printf("Invalid input.");
		}
		else{
		Distance = (float)d/(float)t;
		printf("Total Distance: %.2f m/s.",Distance);
		}
	}
	else if (c=='s' || c=='S'){
		printf("Input a Speed: ");
		scanf("%f",&s);
		printf("Input a Time: ");
		scanf("%f",&t);
		if (s==0 || t==0){
			printf("Invalid input.");
		}
		else{
		Speed = s*t;
		printf("Total Distance: %.2f m.",Speed);
		}
	}
	else if (c=='t'||c=='T'){
		printf("Input a Distance: ");
		scanf("%f",&d);
		printf("Input a Speed: ");
		scanf("%f",&s);
		if (d==0 || s==0){
			printf("Invalid input.");
		}
		else{
		Time = d/s;
		printf("Total time: %d sec.",Time);
		}
	}
	else{
		printf("Invalid Command.");
	}
}
