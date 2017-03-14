#include <stdio.h>

int main(){
    int floors,i,j,k,bricks=1,d_floors;
    printf("-----------------------------------------\n");
    printf("How many floors do you want to build?: ");
    scanf("%d",&floors);
    printf("-----------------------------------------\n");
    d_floors = floors-1;
    for (i=1;i<=floors;i++){
        k=1;
        j=1;
        while (k<=d_floors){
            printf(" ");
            k++;
        }
        while (j<=bricks){
            printf("=");
            j++;
        }
        printf("\n");
        bricks = bricks+2;
        d_floors--;
    }
}
