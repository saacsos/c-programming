# ค่าคงที่ (constant) #
แบ่งเป็น 3 ประเภท
### literal constant ###
* ใส่ข้อมูลไปตรงๆเลย 

 ตัวอย่างโปรแกรม
 printf("2 x 1 = %d",2);

### defined constant ### 
* กำหนดไว้ที่ส่วนหัว ลักษณะคือ
 #define n 100 == #define ตัวแปร ค่าของตัวแปร

 ตัวอย่างโปรแกรม
 #include <stdio.h>
 #define n 100 

 main(){
 int i;
 for(i=0;i<n;i++)
 printf("%d",i);
 } 

 n = 100 และ i = 99

### memory constant ###
* ตัวแปรที่ถูกกำหนดไว้ ตลอดทั้งโปรแกรม เปลี่ยนแปลงค่าไม่ได้ 
 ลักษณะคือ
 const int n=100; == const ชนิดของตัวแปร ตัวแปร=ค่าของตัวแปร;

 ตัวอย่างโปรแกรม
 #include <stdio.h>

 main(){
 const int n=2;
 printf("n = %d",n);
 }
 
### หมายเหตุ ### : ควรระวังการใช้ defined constant พร้อมกับ memory constant อาจเกิดความสับสนได้