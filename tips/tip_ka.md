การสุ่มตัวเลขหรือ random ใช้ 2 function คือ

1 srand();

  คือ function ที่ใช้กําหนดค่า seed ให้กับ function rand(); เพื่อให้ ทุกครั้งที่รันโปรแกรม ผลการ random จะออกมาไม่ซํ้ากัน

2 rand();

  คือ function ใช้สําหรับ random ตัวเลข 0-32767 โดยมากจะใช้ %(mod) เข้ามาช่วย

**ต้องใช้ #include <stdlib.h> ในการเรียกใช้งาน**

ตัวอย่างการเขียน random

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h> 
int main(){
	srand(time(NULL));
 
	int randomNumber1 = rand() % 10; //0-10
	int randomNumber2 = rand() % 10; //0-10
	int randomNumber3 = 50+(rand()%(10-50)); //50-200
 
	printf("Random number1 is %d\n", randomNumber1);
	printf("Random number2 is %d\n", randomNumber2);
	printf("Random number3 is %d\n", randomNumber3);
	getch();
}

Output
Random number1 is 9
Random number2 is 6
Random number3 is 77

Output
Random number1 is 2
Random number2 is 6
Random number3 is 71
