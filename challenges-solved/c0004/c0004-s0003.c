// code c0004
// by @poundtheerapat
// status: Approved by @Tanamet
#include <stdio.h>
float f,s,S,result ; // variable now is global
float focus () // if still 'f' it will be redeclare 'a' is 'f' function
{

    puts("Input s = ");
    scanf("%f",&s);
    puts("Input S = ");
    scanf("%f",&S);
    f = 1/(1/s+1/S);
    return f;
}
float obj_distance () // if still 's' it will be redeclare 'b' is 's' function
{
    puts("Input f = ");
    scanf("%f",&f);
    puts("Input S = ");
    scanf("%f",&S);
    s=1.0/((S-f)/(f*S));
    return s;

}
float pic_distance () // if still 'S' it will be redeclare 'c' is 'f' function
{
    puts("Input f = ");
    scanf("%f",&f);
    puts("Input s = ");
    scanf("%f",&s);
    S = 1.0/((s-f)/(f*s));
    return S;
}
void main ()
{
    char input ;

    printf("What do you want to find?\n");
    printf("Wanna find? : \n");
    scanf("%c", &input);
    if(input == 'f')
    {
        result = focus();
    }
    else if (input == 's')
    {
        result = obj_distance();
    }
    else if (input == 'S')
    {
       result = pic_distance();
    }
    printf("%c = %.1f",input,result);
}
