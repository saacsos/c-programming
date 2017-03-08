# `printf`, `sprintf`, `fprintf`
> by [poonyapat](https://github.com/poonyapat)

`printf` : แสดงผล string ออกมาให้เราเห็น

`sprintf` : format ตัวแปรที่เรากำหนดไว้ให้อยู่ในรูปแบบ string รวมกับข้อความที่กำหนดไว้ก่อนแล้วเก็บไว้ใน array ของ characters

`fprintf` : เขียนข้อความลงในไฟล์ โดยก่อนหน้านั้นต้อง open file เสียก่อน


## Example

`sprintf`

```c
int main()
{
	int x,y;
	char arrX[10], arrY[10];
	scanf("%d %d", &x, &y);
	sprintf(arrX,"x is %d", x);
	sprintf(arrY,"y is %d", y);
	printf("%s, %s\n", arrX, arrY);
}
```

`fprintf`

```c
int main()
{
	FILE *work;
	work = fopen("ForWhat.txt", "w"); //open file for write
	fprintf(work, "Hello World"); //write text to file
	fclose(work); //close file
}
```
