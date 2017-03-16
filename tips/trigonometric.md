# การใช้ฟังก์ชันตรีโกณ #
ใช้คำสั่ง #include <math.h>

การใช้ฟังก์ชันตรีโกณ มีตัวแปร 2 ชนิด
* Degree
* Radian (องศา)

ในโปรแกรมภาษาซี จะมีเพียงฟังก์ชัน<br/>
sin(x), cos(x) ,และ tan(x) เท่านั้น<br/>
ส่วน cosec(x), sec(x), cot(x) ซึ่งเป็นส่วนกลับของ sin(x), cos(x), tan(x)<br/>
ให้ใช้เป็น 1/sin(x), 1/cos(x), 1/tan(x) แทน<br/>

โดยการใช้ sin(degree) จะทำให้ค่าที่ได้มาไม่ถูกต้อง<br/>
เราจึงต้องเปลี่ยน degree เป็น radian<br/>
radian = degree*M_PI/180 โดยที่ M_PI = 3.14159 <br/>

## EX1. ##
```
#include <stdio.h>
#include <math.h>
main()
{
	float degree=30, radian;
	printf("%f\n", sin(degree));
	radian = degree*M_PI/180; //เปลี่ยน 30 เป็น 30องศา
	printf("%f\n", sin(radian));
}
```
### Output ###
-0.988032<br/>
0.500000

รวมถึง arcsin(x), arccos(x), arctan(x)<br/>
ในภาษาซีจะเขียนเป็นฟังก์ชัน asin(x), acos(x), atan(x)<br/>
ในขณะที่การใช้ asin(degree) เมื่อหาค่าออกมาจะเป็น degree<br/>
เราจึงต้องเปลี่ยน degree เป็น radian<br/>
radian = degree*180/M_PI

## EX2. ##
```
#include <stdio.h>
#include <math.h>
main()
{
	float degree=0.5, radian;
	printf("%f\n", acos(degree));
	radian = acos(degree)*180/M_PI;
	printf("%f\n", radian);
}
```
### Output ###
1.047198<br/>
60.000000
