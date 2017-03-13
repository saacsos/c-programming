ตัวอย่าง : การใช้งานฟังก์ชัน atoi อยู่ใน ไลบรารี่ stdlib.h
ฟังก์ชั่นนี้จะส่งกลับจำนวนหนึ่งแปลงค่าข้อความเป็น int หากไม่มีการแปลงที่ถูกต้องสามารถทำได้ก็จะส่งกลับศูนย์
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int val;
   char str[10];
   
   strcpy(str, "11676");  // ทำสำเนา
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "com-sci");  // ทำสำเนา
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}
```
ผลลัพธ์ 
```
	String value = 11676, Int value = 11676
	String value = com-sci, Int value = 0
```


ตัวอย่าง : การใช้งานฟังก์ชัน atof อยู่ใน ไลบรารี่ stdlib.h
ฟังก์ชั่นนี้จะส่งกลับจำนวนหนึ่งแปลงค่าข้อความเป็น float หากไม่มีการแปลงที่ถูกต้องสามารถทำได้ก็จะส่งกลับศูนย์
```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   float val;
   char str[7];
   
   strcpy(str, "116.76");  // ทำสำเนา
   val = atof(str);
   printf("String value = %s, Int value = %.4f\n", str, val);

   strcpy(str, "com-sci");  // ทำสำเนา
   val = atof(str);
   printf("String value = %s, Int value = %.4f\n", str, val);

   return(0);
}
```
ผลลัพธ์ 

	String value = 116.76, Int value = 116.7600
	String value = com-sci, Int value = 0.0000
