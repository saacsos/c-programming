#include <stdio.h>
void main()
{
	int e=0;
	float total,moneytod,money,stamp,newstamp,leftstamp;
	char dorc,b,a,h,t,thing;
	printf("Enter price : "); scanf("%f", &money); getchar(); scanf("%c%c%c%c",&b,&a,&h,&t);
	printf("Enter your stamp : "); scanf("%f", &stamp);
	printf("Choose(discount/change) : "); getchar(); scanf("%c", &dorc);
	if (dorc == 'D' || dorc == 'd' ||dorc == 'C' ||dorc == 'c'){
		if (dorc == 'D' || dorc == 'd'){
			moneytod = stamp*2;
			newstamp=money/50;
			total=money-moneytod;
			printf("Your discount = %.0f Baht\n", moneytod);
			printf("You got %.0f stamps.\n", newstamp);
			printf("Total amount due %.2f Baht.", total);
		}
		else{
			printf("Choose you want to change (w : water bottle/c : chair/b : bed): ");getchar(); scanf("%c", &thing);
			if (thing =='W' || thing =='w' ||thing =='C' ||thing =='c' ||thing =='b' ||thing =='B'){
				if(thing =='W' || thing =='w'){
					if(stamp>=10){
						printf("Congratulation you got water bottle!!\n");
						leftstamp=stamp-10;
						printf("You have %.0f stickers left.\n", leftstamp);
					}
					else if (stamp<10){
						printf("Sorry you have not enough stamps.\n");
					}
				}
				if(thing =='C' ||thing =='c'){
					if(stamp>=20){
						printf("Congratulation you got chair!!\n");
						leftstamp=stamp-20;
						printf("You have %.0f stickers left.\n", leftstamp);
					}
					else if (stamp<20){
						printf("Sorry you have not enough stamps.\n");
					}					
				}
				if(thing =='b' ||thing =='B'){
					if(stamp>=30){
						printf("Congratulation you got chair!!\n");
						leftstamp=stamp-30;
						printf("You have %.0f stickers left.\n", leftstamp);
					}
					else if (stamp<30){
						printf("Sorry you have not enough stamps.\n");
					}					
				}
				newstamp=money/50;
				printf("You got %.0f stamps.\n", newstamp);
				printf("Total amount due %.2f Baht.", money);
			}
			else{
				e=e+1;
			}
		}
	}
	else{
		e=e+1;
	}
	if (e>0) {printf("ERROR!!!!");}
}