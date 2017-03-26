// code c0002
// by @Briingz

#include <stdio.h>
#include <string.h>
int main()
{
	int num ,i,j,x,y;
	printf("num= ");
	scanf("%d",&num);

	char control[10];
	x=num-1;y=num-1;
	do{
		for (i=0;i<num;i++)
		{
			for(j=0;j<num;j++){
				if (i==y && j==x)
					printf("X");
				else
					printf("#");
			}
			putchar('\n');

		}
		scanf("%s",&control);
		if(strcmp(control,"up")==0){
			if(y>0)
				y--;
			else if (y==0)
				y=y;
		}
		else if(strcmp(control,"down")==0){
			if(y<num-1)
				y++;
			else if (y==num-1)
				y=y;
		}
		else if(strcmp(control,"left")==0){
			if(x>0)
				x--;
			else if (x==0)
				x=x;
		}
		else if(strcmp(control,"right")==0){
			if(x<num-1)
				x++;
			else if (x==num-1)
				x=x;
		}
		else if(strcmp(control,"stop")!=0)
			printf("Command not found\n");



	}while(strcmp(control,"stop")!=0);

	return 0;

} 
