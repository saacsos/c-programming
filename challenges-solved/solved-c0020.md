#include <stdio.h>
main(){
	float vvv,sss,ttt;
	char keep;
	
	printf("[v]:Speed [s]:Distance [t]:Time\n");
	printf("Input Command: ");
	scanf("%s",&keep);

	if (keep == 'V' || keep == 'v' )
		{printf("Input a Distance: ");
		 scanf("%f",&sss);
		 printf("Input a time: ");
		 scanf("%f",&ttt);
		 if (sss>0&&ttt>0){
		 vvv = sss/ttt;
		 printf("Total Speed: %.2f m/s.",vvv); }
		 else 
			printf("Invalid input.");}

	else if (keep == 's' || keep == 'S' ){
		printf("Input a Speed: ");
		scanf("%f",&vvv);
		printf("Input a Time: "); 
		scanf("%f",&ttt);
		if (vvv>0 && ttt>0){
		sss=vvv*ttt;
		printf("Total Distance: %.2f m.",sss);}
		 else 
			printf("Invalid input.");}
	
	else if (keep == 't' || keep == 'T'){
		printf("Input a Distance: ");
		scanf("%f",&sss);
		printf("Input a Speed: ");
		scanf("%f",&vvv);
		if (vvv>0&&sss>0){
		ttt=sss/vvv;
		printf("Total time: %.2f sec.",ttt);}
		else 
			printf("Invalid input.");
	}


	else 

	{printf("Invalid Command.");
		
	}
}
