// code c0003
// by @Briingz

#include <stdio.h>
int main()
{
	int numpeople ,numback;
	float bfmoney,afmoney,pay,allpay=0;

	printf("Input total passenger : ");
	scanf("%d",&numpeople);
	if (numpeople<0 || numpeople >10 )
		printf(">> ERROR!!\n");

	while(numpeople>0 && numpeople<=10)
	{
		putchar('\n');
		printf("Current taxi fare : ");
		scanf("%f",&bfmoney);


		if (bfmoney<afmoney)
		{
			printf(">> ERROR!!\n");
			break;
		}
		pay=(bfmoney-allpay)/numpeople;
		printf(">> Pay : %.2f Baht\n",pay);
		afmoney=bfmoney;
		allpay+=pay;

		numpeople--;
		if(numpeople>0)
			printf(">> Current number of passengers : %d\n",numpeople);

	}
	printf("\n-----End of program-----");
  return 0;

}

