//code c0019

#include <stdio.h>

int main(){
	float unit,usage,paybill,pay;


	printf("Electricity used: ");
	scanf("%f",&usage);

	if (usage<0){
		printf("Invalid input");
	}

	else if (usage<=50){
		printf("Electricity charge: 0.00 baht.");
	}
	else if (usage>50){
		unit = usage;
		pay =  15*2.3488+10*2.9882+10*3.2405+8.19;
		if(usage<=100){
			paybill = pay+((usage-35)*3.6237);
		}
		if (usage<=150&&usage>100){
		   paybill = pay+(65*3.6237)+((usage-100)*3.7171);
		}
		if(usage<=400&&usage>150){
			paybill = pay+(65*3.6237)+((50)*3.7171)+((usage-150)*4.2218);
		}
		if(usage>400){
			paybill = pay+(65*3.6237)+((50)*3.7171)+((250)*4.2218+(usage-400)*4.4217);
		}
	printf("Electricity charge: %.2f",paybill);
	}
}
