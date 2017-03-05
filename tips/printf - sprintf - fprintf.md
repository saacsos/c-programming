# เอาง่าย ๆ สั้น #

- printf    >>   แสดงผลออกมาให้เราเห็น

- sprintf   >>   format ตัวแปรที่เรากำหนดไว้ให้อยู่ในรูปแบบ string รวมกับข้อความที่กำหนกไว้ก่อนแล้วเก็บไว้ใน array character

- fprintf   >>   เขียนข้อความลงในไฟล์ โดยก่อนหน้านั้นต้อง open file เสียก่อน

# Example #

- printf [ใช้กันเป็นอยู่แล้วน่า]

- sprintf 

int main()

{

	int x,y;
  
	char arrx[10], arry[10];
	
	scanf("%d %d", &x, &y);

	sprintf(arrx,"x is %d", x);
	sprintf(arry,"y is %d", y);

	printf("%s, %s\n", arrx, arry);
}

- fprintf

int main()

{

	FILE *work;

	work = fopen ("ForWhat.txt","w"); //open file for write

	fprintf(work, "Hello World"); //write text to file

	fclose(work); //close file
}


