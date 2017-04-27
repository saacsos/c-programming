do - while

คำสั่ง do - whille เป็นคำสั่งที่ใช้ในการควบคุมโปรแกรมโดยจะเริ่มทำก่อน แล้วจึงตรวจสอบเงื่อนไข
> โครงสร้าง do - while
do {
	statement 1 ;
	statement 2 ;
	statement 3 ;
	........... ;
	statement n ;
}
while (condition) ;

> ตัวอย่าง
	>> การแสดงตัวเลข 1 - 10 ออกทางจอภาพ

#include <stdio.h>

int main() {

	int i = 1;

	do {
		printf("%d ", i);
		i++;
	}
	while (i <= 10);
	
	printf("\nBYE.");
}
> out put
1 2 3 4 5 6 7 8 9 10
BYE.

จะเห็นได้ว่าโปรแกรมจะเริ่มทำคำสั่งที่ do ก่อน แล้วจึงมาตรวจสอบเงื่อนไขที่ while 
หากเงื่อนไขที่ while เป็นจริง ก็จะกลับไปที่ do ใหม่ หากเป็นเท็จ จะจบการทำงาน