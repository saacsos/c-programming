# switch-case #

switch-case ลักษณะการทำงานเหมือนกับฟังก์ชัน if…else…ซ้อนกัน แต่ใช้งานได้สะดวกกว่า เหมาะสำหรับเขียนโปรแกรม เพื่อสร้างทางเลือกรายการ (Menu) ของโปรแกรม 

### Syntax ###
```c

switch (expression)  //ตัวแปรนี้จะต้องเป็นชนิดตัวเลขจำนวนเต็ม(int,short,long)หรือตัวอักษร 1 ตัว (char)เท่านั้น
{
case constant_1: statement_1;
     break;

case constant_2: statement_2;
     break;

case constant_3: statement_3;
     break;

default: statement;
}
```

### Example ###
```c
switch(menu)                    // ต้องการดูค่าใน menu 
{
case 1 : printf("Choose 1");   // ถ้า menu มีค่าเป็น 1 ให้ printf ตรงนี้มากกว่า 1 คำสั่งได้              
         break;               // ใส่ break ก่อนขึ้นเคสต่อไป
case 2 : printf("Choose 2 ");
         break;
case 0 : printf("exit");
         break;
default : printf("Wrong");   // ถ้าไม่ตรงเลย จะมาทำหลัง default ซึ่งไม่ต้องมี break ก็ได้
}

```

#ไม่ใส่breakได้ไหม#
>ได้ แต่ปัญหาคือ ถ้า menu เป็น 1 มันจะทำตั้งแต่ case 1 :.. ไปจนถึง default หรือจนกว่าจะเจอคำสั่ง break;