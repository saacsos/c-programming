# ค่าคงที่ (constant) #
> by [vitaminadek](https://github.com/vitaminadek)

แบ่งเป็น 3 ประเภท
### literal constant ###
*   ใส่ข้อมูลไปตรง ๆ เลย

ตัวอย่างโปรแกรม

`printf("2 x 1 = %d", 2);`

### defined constant ###
*   กำหนดไว้ที่ส่วนหัว ลักษณะคือ `#define ตัวแปร ค่าของตัวแปร` เช่น `#define MAX_NUMBER 100`


ตัวอย่างโปรแกรม
```c
#include <stdio.h>
#define MAX_NUMBER 100

int main()
{
    int i;
    for(i = 0; i < MAX_NUMBER; i++)
        printf("%d ", i);
}
```

### memory constant ###
*   ตัวแปรที่ถูกกำหนดไว้ ตลอดทั้งโปรแกรม เปลี่ยนแปลงค่าไม่ได้
 ลักษณะคือ `const ชนิดของตัวแปร ตัวแปร=ค่าของตัวแปร;` เช่น
 `const int n = 100;`

ตัวอย่างโปรแกรม
```c
#include <stdio.h>
int main()
{
    const int n = 2;
    printf("n = %d", n);
}
```
***หมายเหตุ*** : ควรระวังการใช้ defined constant พร้อมกับ memory constant อาจเกิดความสับสนได้
