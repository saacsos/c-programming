// c0002
// by @Tanamet
// status: Approved by @poonyapat

#include <stdio.h>
#include <String.h>
#define True 1
#define False 0

int main(){
    int running=True;
    double n,x,y;
    char command[5];
    scanf("%lf",&n);
    x = n; y = n;
    while(running){
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==y && j==x)
                putchar('X');
                else
                putchar('=');
            }
            putchar('\n');
        }
        scanf("%s",&command);
            if (strcmp(command,"up")==0) y-=(y<2?0:1);
            else if (strcmp(command,"down")==0) y+=(y>n-1?0:1);
            else if (strcmp(command,"left")==0) x-=(x<2?0:1);
            else if (strcmp(command,"right")==0) x+=(x>n-1?0:1);
            else if (strcmp(command,"stop")==0) running=False;
            else printf("Command not found\n");
    }
  return 0;
}
