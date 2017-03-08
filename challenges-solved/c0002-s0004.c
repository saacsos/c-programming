// code c0002
// by @	kopinw1234
// status: waiting for approval
#include <stdio.h>
#include <string.h>
int main(){
	int n,i,j,cou=1,c;
	char a[6];
	scanf("%d",&n);
	i=1;
	c=n*n;
	while(i<=n){
		j=1;
		while(j<=n){
			if(cou==c){
				printf("X");
			}
			else{
			printf("#");
			}
			j=j+1;
			cou=cou+1;
		}
		printf("\n");
		i=i+1;
	}
	while(1){
		scanf("%s",&a);
		if(strcmp(a,"stop")==0){
			break;
		}
		else if(strcmp(a,"up")==0 || strcmp(a,"down")==0 || strcmp(a,"left")==0 || strcmp(a,"right")==0){
			if(strcmp(a,"up")==0){
				c=c-n;
				if(c<=0){
					c=c+n;
				}
			}
			if(strcmp(a,"right")==0){
				c=c+1;
				if(c%n==1){
					c=c-1;
				}
			}
			if(strcmp(a,"left")==0){
				c=c-1;
				if(c%n==0){
					c=c+1;
				}
			}
			if(strcmp(a,"down")==0){
				c=c+n;
				if(c>n*n){
					c=c-n;
				}
			}
		i=1;
		cou=1;
		while(i<=n){
		j=1;
		while(j<=n){
			if(cou==c){
				printf("X");
			}
			else{
			printf("#");
			}
			j=j+1;
			cou=cou+1;
		}
		printf("\n");
		i=i+1;
		}
		}
		else{
			printf("Command not found\n");
		}
	}
}
