#include <stdio.h>
int main()
{
	char symbol;
	int length, num;	
	printf("Enter length : ");
	scanf("%d",&length);
	getchar();
	printf("Enter symbol : ");
	scanf("%c",&symbol);
	printf("Enter amount : ");
	scanf("%d",&num);
	int i,j,k=0,l;
	if(length > 0 && num > 0)
	{
			for(i=0;i<length;i++)
			{
			if(i==0 || i == length-1)
			{
				for(int mi = 0 ; mi < (length*num)+length; mi++)
					printf("-");
				puts("");
			}
			else
				{
						for(l=0;l<=num;l++)
						{
							printf("|");
							int check = k;
							if( k < ((length-2)/2))
							{
								int b,a;
								for (b = 0 ; b < k; b++)
									putchar(' ');
								for(a = 0; a < length-2-(k*2);a++)
									putchar(symbol);
								for (b = 0 ; b < k; b++)
									putchar(' ');
							}
							if (k+1 > ((length-2)/2))
							{
								int b;
								for (b = 2 ; b < length-1-k;b++)
									putchar(' ');
								for(int a = 0; a < length-((b-1)*2);a++)
									putchar(symbol);
								for (b = 2 ; b < length-1-k;b++)
									putchar(' ');
							}
						printf("|");	
						
						}	
						k++;
						puts("");
					}	
		}	
	}


}
