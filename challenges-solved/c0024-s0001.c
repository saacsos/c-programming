// code c0024
// by @Orayajp
// status waiting for approval
#include <stdio.h>
#include <string.h>
int main(){
	int Age,kcal;
	float cal,kg,cm,how,calex;
	char Sex,ex;
	char what[6];
	printf("<<< Let's calculate your callorie >>>\n");
	printf("Sex (m/f) : ");
	scanf("%c",&Sex);
	if(Sex=='m'||Sex=='f'){
		printf("Age : ");
		scanf("%d",&Age);
		if(Age>0&&Age<=100){
			printf("Weight (kg) : ");
			scanf("%f",&kg);
			if(kg>=40&&kg<=150){
				printf("Height (cm) : ");
				scanf("%f",&cm);
				if(cm>=150&&cm<=200){
					printf(". . . . . . . . . . . . . . . . . . . . . . . . .\n");
					if(Sex =='m'){
						cal = 66 + (13.7 * kg)+(5 * cm)-(6.8 * Age);
					}
					if(Sex== 'f' ){
						cal = 665 + (9.6 * kg)+(1.8 * cm)-(4.7 * Age);
					}
					printf("You need %.2f kcal for everyday.\n",cal);
					printf("\nDo you exercise today ? (y/n) : ");
					scanf(" %c",&ex);
					if(ex == 'y'||ex == 'n'){
						if(ex == 'y'){
							printf("what kind of exercise ? : ");
							scanf("%s",&what);
							if(strcmp(what,"dance")==0 || strcmp(what,"dance")==0 || strcmp(what,"SWIM")==0 || strcmp(what,"swim") || strcmp(what,"RUN")==0 || strcmp(what,"run")==0 || strcmp(what,"aerobic")==0 || strcmp(what,"AROBIC")==0){
								if(strcmp(what,"dance")==0 || strcmp(what,"dance")==0)
									kcal = 500;
								if(strcmp(what,"SWIM")==0 || strcmp(what,"swim"))
									kcal = 700;
								if(strcmp(what,"RUN")==0 || strcmp(what,"run")==0)
									kcal = 600;
								if(strcmp(what,"aerobic")==0 || strcmp(what,"AROBIC")==0)
									kcal = 600;
								printf("How long ? (hour) : ");
								scanf("%f",&how);
								if(how>=1&&how<=5){
									cal = cal+(kcal*how/2);
									printf(". . . . . . . . . . . . . . . . . . . . . . . . .\n");
									printf("You need %.2f kcal for everyday.\n",cal);
								}
								else{
									printf("!!!!!ERROR!!!!!\n");
									printf(". . . . . . . . .B.....y......e. . . . . . . . .");
								}
							}
							else{
								printf("!!!!!ERROR!!!!!\n");
								printf(". . . . . . . . .B.....y......e. . . . . . . . .");
							}
						}
						if(ex=='n'){
							printf(". . . . . . . . . . . . . . . . . . . . . . . . .\n");
							printf("You need %.2f kcal for everyday.\n",cal);
						}
					}
					else{
						printf("!!!!!ERROR!!!!!\n");
						printf(". . . . . . . . .B.....y......e. . . . . . . . .");
					}
				}
				else{
					printf("!!!!!ERROR!!!!!\n");
					printf(". . . . . . . . .B.....y......e. . . . . . . . .");
				}
			}
			else{
				printf("!!!!!ERROR!!!!!\n");
				printf(". . . . . . . . .B.....y......e. . . . . . . . .");
			}
		}
		else{
			printf("!!!!!ERROR!!!!!\n");
			printf(". . . . . . . . .B.....y......e. . . . . . . . .");
		}
	}
	else{
		printf("!!!!!ERROR!!!!!\n");
		printf(". . . . . . . . .B.....y......e. . . . . . . . .");
	}
}
