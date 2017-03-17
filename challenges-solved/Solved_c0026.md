
แก้โจทย์ c0026.md (Find Resistent)
~~~
#include <stdio.h>
#include <math.h>

int main(){
  char b1, b2, b3, b4;
  float tt_b1, tt_b2, tt_b3, tt_b4, error = 0, total, maX, miN;
  while(1){
  printf("1st Band color: ");
  scanf("\n%c", &b1);
  printf("2nd Band color: ");
  scanf("\n%c", &b2);
  printf("3rd Band color: ");
  scanf("\n%c", &b3);
  printf("4th Band color: ");
  scanf("\n%c", &b4);

  switch(b1){
    case 'K':
      tt_b1 = (0*10);
      break;
    case 'N':
      tt_b1 = (1*10);
      break;
    case 'R':
      tt_b1 = (2*10);
      break;
    case 'O':
      tt_b1 = (3*10);
      break;
    case 'Y':
      tt_b1 = (4*10);
      break;
    case 'G':
      tt_b1 = (5*10);
      break;
    case 'U':
      tt_b1 = (6*10);
      break;
    case 'V':
      tt_b1 = (7*10);
      break;
    case 'A':
      tt_b1 = (8*10);
      break;
    case 'T':
      tt_b1 = (9*10);
      break;
    default:
      error++;
      break;
  }
  switch(b2){
    case 'K':
      tt_b2 = 0;
      break;
    case 'N':
      tt_b2 = 1;
      break;
    case 'R':
      tt_b2 = 2;
      break;
    case 'O':
      tt_b2 = 3;
      break;
    case 'Y':
      tt_b2 = 4;
      break;
    case 'G':
      tt_b2 = 5;
      break;
    case 'U':
      tt_b2 = 6;
      break;
    case 'V':
      tt_b2 = 7;
      break;
    case 'A':
      tt_b2 = 8;
      break;
    case 'T':
      tt_b2 = 9;
      break;
    default:
      error++;
      break;
  }
  switch(b3){
    case 'K':
      tt_b3 = pow(10,0);
      break;
    case 'N':
      tt_b3 = pow(10,1);
      break;
    case 'R':
      tt_b3 = pow(10,2);
      break;
    case 'O':
      tt_b3 = pow(10,3);
      break;
    case 'Y':
      tt_b3 = pow(10,4);
      break;
    case 'G':
      tt_b3 = pow(10,5);
      break;
    case 'U':
      tt_b3 = pow(10,6);
      break;
    case 'V':
      tt_b3 = pow(10,7);
      break;
    case 'A':
      tt_b3 = pow(10,8);
      break;
    case 'T':
      tt_b3 = pow(10,9);
      break;
    case 'L':
      tt_b3 = pow(10,-1);
      break;
    case 'S':
      tt_b3 = pow(10,-2);
      break;
    default:
      error++;
      break;
  }
  switch(b4){
    case 'R':
      tt_b4 = 2./100;
      break;
    case 'L':
      tt_b4 = 5./100;
      break;
    case 'S':
      tt_b4 = 10./100;
      break;
    default:
      error++;
      break;
  }
  printf("-------------------------------------\n");
  if (error != 0 ){
    printf("Invalid! sorry we can't find Band color. Please try again.");
    error = 0;
    printf("\n\n");
  }
  else{
    total = (tt_b1+tt_b2) * tt_b3;
    maX = total + (total * tt_b4);
    miN = total - (total * tt_b4);
    printf("Resistance valuse is : %.2f Ohm.\n", total);
    printf("Maximum resistance valuse is : %.2f Ohm.\n", maX);
    printf("Minimum resistance valuse is : %.2f Ohm.\n", miN);
    break;
  }
}
}
~~~
