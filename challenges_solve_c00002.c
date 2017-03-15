#include <stdio.h>
#include <string.h>

int main(){
	int i,j,n,x,y;
	char comand[256];

	char up[3] = "up";
	char left[5] = "left";
	char right[6] = "right";
	char down[5] = "down";
	char stop[5] = "stop";
	
	scanf("%d",&n);
	char a[n][n];
	
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			a[i][j]='#';
	x = n-1;
	y = n-1;
	a[y][x] = 'X';

	while (strcmp(stop,comand)!=0)
	{
		for (i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
		scanf("%s",comand);
		if (strcmp(comand,up)==0)
			if (y>0)
				y--;
			else
				y=y;
		else if (strcmp(comand,left)==0)
			if (x>0)
				x--;
			else
				x=x;
		else if (strcmp(comand,right)==0)
			if (x<n)
				x++;
			else
				x=x;
		else if (strcmp(comand,down)==0)
			if (y<n)
				y++;
			else
				y=y;
		else if(strcmp(comand,stop)==0)
			continue;
		else
		{
			printf("Command not found\n");
			continue;
		}

		for (i=0;i<n;i++)
			for (j=0;j<n;j++)
				a[i][j] = '#';
		a[y][x]='X';
	}
}