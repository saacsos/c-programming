// code c0020
// by @soizensun
// status: approved by @junielism
#include <stdio.h>
int main(){
	char c;
	float v, s, t;
printf("[v]:Speed [s]:Distance [t]:Time\n");
printf("Input Command: ");
scanf("%c",&c);

	if (c == 'v' || c == 'V'){
		printf("Input a Distance: "); scanf("%f",&s);
		printf("Input a time: "); scanf("%f",&t);
		if ((s <= 0) || (t <= 0)){
			printf("Invalid input.");
		}
		else {
			v = s/t;
			printf("Total Speed: %.2f m/s.",v);
		}
	}
	else if (c == 's' || c == 'S'){
		printf("Input a Speed: "); scanf("%f",&v);
		printf("Input a time: "); scanf("%f",&t);
		if ((v <= 0) || (t <= 0)){
			printf("Invalid input.");
		}
		else {
			s = v*t;
			printf("Total Distance: %.2f m.",s);
		}
	}
	else if (c == 't' || c == 'T'){
		printf("Input a Distance: "); scanf("%f",&s);
		printf("Input a Speed: "); scanf("%f",&v);
		if ((s <= 0) || (v <= 0)){
			printf("Invalid input.");
		}
		else {
			t = s/v;
			printf("Total time: %.2f sec.",t);
		}
	}
	else{
		printf("Invalid command.\n");
	}



}
