//c0005
// by robinker
// status: Approved by @poonyapat

#include <stdio.h>
int main()
{
    unsigned long long  n, i, a_4, sum, day[4] = {1, 0, 0, 0};

    printf("Input: ");
    scanf("%llu", &n);
    //give birth;


    for(i=0; i<n; i++)
    {
    	a_4 = day[3];
        day[3] = day[2];
        day[2] = day[1];
        day[1] = day[0];
        day[0] = 8*day[1] + 4*day[2] + 2*day[3] + a_4;

    }
    sum=day[0]+day[1]+day[2]+day[3];
    printf("Output: %llu", sum);
}
