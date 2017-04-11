#include <stdio.h>
#include <math.h>
int main(){
    int space , layer , i=1, final,brick;
    printf("-----------------------------------------\n");
    printf("How many floors do you want to build?: ");
    scanf("%d",&layer);
    printf("-----------------------------------------\n");
    final = layer * layer;
    while(layer > 0){
        for(space = 1 ; space < layer ; space++)
            printf(" ");
        for(brick = 0 ; brick < i * 2 - 1 ; brick++){
            printf("=");
        }
        printf("\n");
        i++;
        layer--;
    }
    if(final > 0)
        printf("Number of bricks required: %d\n",final);
}
