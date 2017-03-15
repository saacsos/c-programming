#include <stdio.h>
void main (){
	int tick , sum=0 , cost , count=0 , keep=0 , chin , keep2;
	char ch;
	printf("Welcome !~\n- - - - - - - - - - - - - - - - - - - -\n");
	while (1){
		if(keep==4){break;}
		printf("\nPrice : "); scanf("%d",&cost);
		if (cost==0){break;}
		if (cost==1200||cost==2200||cost==3200||cost==4500||cost==5000){
			printf("Amount of ticket : ");scanf("%d",&count);
			keep += count ;
			keep2 = 4- keep ;
			if (count>4||keep> 4){
				while (1){
					printf("Can not sell more than 4 tickets, please enter amount of ticket again.\n");
					printf("Amount of ticket : ");scanf("%d",&count);
					if (count <=3 && count >0 || count == keep2 ){break;}
				}
			}
			if (cost == 1200){
				printf("Zone : ");getchar();scanf("%c",&ch);
				chin = ch ;
				if (chin >='T' && chin <='Z'){sum += cost*count ;}
				else {
					while (1){
						printf("Invalid zone, please enter zone again.\n");
						printf("Zone : ");getchar();scanf("%c",&ch);
						chin = ch ;
						if (chin >='T' && chin <='Z'){
							sum += cost*count ;
							break;
						}
					}
				}
			}
			if (cost == 2200){
				printf("Zone : ");getchar();scanf("%c",&ch);
				chin = ch ;
				if (chin >='M' && chin <='S'){sum += cost*count ;}
				else {
					while (1){
						printf("Invalid zone, please enter zone again.\n");
						printf("Zone : ");getchar();scanf("%c",&ch);
						chin = ch ;
						if (chin >='M' && chin <='S'){
							sum += cost*count ;
							break;
						}
					}
				}
			}
			if (cost == 3200){
				printf("Zone : ");getchar();scanf("%c",&ch);
				chin = ch ;
				if (chin >='G' && chin <='L'){sum += cost*count ;}
				else {
					while (1){
						printf("Invalid zone, please enter zone again.\n");
						printf("Zone : ");getchar();scanf("%c",&ch);
						chin = ch ;
						if (chin >='G' && chin <='L'){
							sum += cost*count ;
							break;
						}
					}
				}
			}
			if (cost == 4500){
				printf("Zone : ");getchar();scanf("%c",&ch);
				chin = ch ;
				if (chin >='C' && chin <='F'){sum += cost*count ;}
				else {
					while (1){
						printf("Invalid zone, please enter zone again.\n");
						printf("Zone : ");getchar();scanf("%c",&ch);
						chin = ch ;
						if (chin >='C' && chin <='F'){
							sum += cost*count ;
							break;
						}
					}
				}
			}
			if (cost == 5000){
				printf("Zone : ");getchar();scanf("%c",&ch);
				chin = ch ;
				if (chin=='A' || chin =='B'){sum += cost*count ;}
				else {
					while (1){
						printf("Invalid zone, please enter zone again.\n");
						printf("Zone : ");getchar();scanf("%c",&ch);
						chin = ch ;
						if (chin =='A' && chin =='B'){
							sum += cost*count ;
							break;
						}
					}
				}
			}
		}
		else {printf("Invalid price, please enter price again.");}
	}
	printf("\n- - - - - - - - - - - - - - - - - - - -\n");
	printf("Total %d Bath.",sum );
}