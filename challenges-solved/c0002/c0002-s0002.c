// c0002
// by @dottydaily
// status: Approved by @poonyapat

#include <stdio.h>
#include <string.h>

void print_table (int x, int y, int size)
{
	int i, j;

	for(i = 0 ; i < size ; i++){
		for(j = 0 ; j < size ; j++){
			if (i == y && j == x)
				putchar('X');
			else
				putchar('=');
		}
		putchar('\n');
	}
}

int main()
{
	int n, i, j, x_pos, y_pos;
	char command[6];

	scanf("%d", &n);
	getchar();

	x_pos = y_pos = n-1;

	do{
		//printf table each round
		print_table (x_pos, y_pos, n);
		gets(command);

		if (strcmp(command, "up") == 0)
			y_pos--;
		else if (strcmp(command, "down") == 0)
			y_pos++;
		else if (strcmp(command, "left") == 0)
			x_pos--;
		else if (strcmp(command, "right") == 0)
			x_pos++;
		else if (strcmp(command, "stop") != 0)
			printf("Command not found\n");

		//check if position goes out of range
		if (y_pos > n-1)
			y_pos = n-1;

		if (y_pos < 0)
			y_pos = 0;

		if (x_pos > n-1)
			x_pos = n-1;

		if (x_pos < 0)
			x_pos = 0;
	} while (strcmp(command, "stop") != 0);
}
