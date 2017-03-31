//c0004
// by @dottydaily
// status: Approved by @Tanamet

#include <stdio.h>

int main()
{
	double f, s_obj, s_pic;
	int choice;

	printf("What do you want to find?\nWanna find : ");
	choice = getchar();

	switch(choice){
		case 'f' :
			printf("Input s = ");
			scanf("%lf", &s_obj);
			printf("Input S = ");
			scanf("%lf", &s_pic);
			//printf("%f %f %f\n", f, s_obj, s_pic);
			f = 1.0 / ( (s_pic+s_obj)/(s_obj*s_pic) );
			printf("f = %.1lf", f);
			break;
		case 's' :
			printf("Input f = ");
			scanf("%lf", &f);
			printf("Input S = ");
			scanf("%lf", &s_pic);
			//printf("%f %f %f\n", f, s_obj, s_pic);
			s_obj = 1.0 / ( (s_pic-f)/(f*s_pic) );
			printf("s = %.0lf", s_obj);
			break;
		case 'S' :
			printf("Input f = ");
			scanf("%lf", &f);
			printf("Input s = ");
			scanf("%lf", &s_obj);
			//printf("%f %f %f\n", f, s_obj, s_pic);
			s_pic = 1.0 / ( (s_obj-f)/(f*s_obj) );
			printf("S = %.0lf", s_pic);
			break;
	}
}
