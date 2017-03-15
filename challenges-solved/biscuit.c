#include <stdio.h>

int main()
{
	int len,n_biscuit;
	char sym;
	printf("Enter Length: ");
	scanf("%d",&len);
	getchar();
	printf("Enter symbol: ");
	scanf("%c",&sym);
	printf("Enter amount: ");
	scanf("%d",&n_biscuit);


	for (int i = 0; i< len; i++){
		for (int j = 0; j < len*n_biscuit; j++){
			if (i==0 || i== len-1){
				putchar('-');
			}
			else if (j%len == 0 || j%len == len-1)
				putchar('|');
			else if ((j%len >= i && j%len <= len-1-i) || 
			 (j%len >= len-1-i && j%len <= i))
				putchar('#');
			else{
				putchar(' ');
			}
		}
		putchar(10);
	}

	return 0;
}
