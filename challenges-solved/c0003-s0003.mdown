#include <stdio.h>

int main()
{
	float n,m,a,b=0;
	printf("Input total passenger : ");
	scanf("%f",&n);
	printf("\n");
	a = n;

	if(n>10 || n<0)
		printf(">> ERROR!!\n");
	else{
		for(int i=0 ; i<n ; i++){
			printf("Current taxi fare : ");
			scanf("%f",&m);
			if(m<0){
				printf(">> ERROR!!\n");
				break;
			}
			else if(a==1){
				printf(">> Pay : %.2f Baht",m-b);
				printf("\n");
			}
			else{
				printf(">> Pay : %.2f Baht\n",(m-b)/a);
				b+=((m-b)/a);
				printf(">> Current number of passengers : %.0f\n",a-1);
				a--;
				printf("\n");
			}
		}
	}
	printf("\n-----End of program-----\n");

	return 0;
}