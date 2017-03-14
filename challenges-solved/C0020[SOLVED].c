#include <stdio.h>

int main(){
  float s,t,v;
  char input;
  printf("[v]:Speed [s]:Distance [t]:Time\nInput Command: ");
  scanf("%s",&input);
  if (input=='v'||input=='V'){
    printf("Input a Distance: ");
    scanf("%f",&s);
    printf("Input a time: ");
    scanf("%f",&t);
    if(s>0&&t>0)
    printf("Total Speed: %.2f  m/s.",s/t);
    else
    printf("Invalid input.");
  }
  
  else if(input=='S'||input=='s'){
    printf("Input a Speed: ");
    scanf("%f",&v);
    printf("Input a Time: ");
    scanf("%f",&t);
    if(v>0&&t>0)
    printf("Total Distance: %.2f m.",t*v);
    else
    printf("Invalid input.");
    
  }
  
  else if(input=='t'||input=='T') {
    printf("Input a Distance: ");
    scanf("%f",&s);
    printf("Input a Speed: ");
    scanf("%f",&v);
    if(s>0&&v>0)
    printf("Total time: %.0f sec.",s/v);
    else
    printf("Invalid input.");
    
  }
  
  else{
    printf("Invalid Command.");
   
  }
    //c0020
    
  
}
