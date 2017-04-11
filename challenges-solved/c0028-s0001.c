// c0028
// by @RatchanonBua
// status: waiting for approval
#include <stdio.h>
int main(){
	int ocular_s;
	float b_scale, result;
	printf("how many ocular scale take : ");
	scanf("%d",&ocular_s);
	if(ocular_s>0&&ocular_s<=100){
		printf("how big is stage in one scale take : ");
		scanf("%f",&b_scale);
		if(b_scale>0){
			result=b_scale/ocular_s*1000;
			printf("\nOH MY GOD !!ocular micrometer is so big it %.1f um.",result);
		}
		else{
			printf("-");
		}
	}
	else{
		printf("-");
	}
}
