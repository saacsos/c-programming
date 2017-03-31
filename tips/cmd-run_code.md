# cmd - run code #
> by [tumbj](https://github.com/tumbj)

วิธีแก้เมื่อเวลารันโค้ดบน git แล้ว มันไม่ยอมแสดงผล printf มันให้ใส่ input ก่อน  โค้ดถึงจะทำงานต่อได้

วิธีใช้ cmd

1.  กดปุ่ม start + r แล้วพิมพ์ cmd หรือ กดปุ่ม start แล้วค้นหาคำว่า cmd จากนั้นกด enter
2.  ลากไฟล์.exe ไปวาง จากนั้นกด enter

***หมายเหตุ***

อย่าลืม gcc ไฟล์.c ให้เป็น ไฟล์.exe ก่อน<br>
วิธี gcc ไฟล์.c ให้เป็น ไฟล์.exe<br>
1.  ทำการเซฟงานให้เรียบร้อย โดยเซฟเป็นไฟล์ .c (ex: file01.c)
2.  คลิกขวาในโฟลเดอร์ที่ไฟล์ .c อยู่
3.  คลิกขวาไปที่ git bash here
4.  จากนั้น พิมพ์ gcc ชื่อไฟล์.c -o ตั้งชื่อให้ไฟล์.exe
(ex: gcc file01.c -o file01)

[รูปตัวอย่างที่ 1](https://drive.google.com/file/d/0B2EGaoK7RNN8ZHYtWnhwVkx3LVk/view?usp=sharing)

code ตัวอย่างที่ 1
```c
#include <stdio.h>
int main() {
    int a ;
    printf("Input Number: ");
    scanf("%d", &a);
    printf("Output Number: %d ",a);

    return 0;
}
```

[ตัวอย่างที่ 2](https://drive.google.com/file/d/0B2EGaoK7RNN8c09SRFpNRWRYTGs/view?usp=sharing)

code ตัวอย่างที่ 2
```c
#include <stdio.h>
void main()
{
    int hour, min;
    printf("Enter hour: ");
    scanf("%d", &hour);
    printf("Enter minute: ");
    scanf("%d", &min);
    printf("Time is %02d:%02d", hour, min);
}
```
