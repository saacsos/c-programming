# อ่านค่าเวลาจากเครื่องคอมพิวเตอร์ #
> by [nacha44](https://github.com/nacha44)

ในเฮดเดอร์ไฟล์ที่ชื่อ `time.h` ต้องทำการ `#include <time.h>` เข้ามาทุกครั้ง

ก่อนการใช้งานฟังก์ชันที่เกี่ยวกับเวลาต้องการการประกาศค่าตัวแปรชนิด `t_time` เสียก่อน จากตัวอย่างเป็นการกำหนดค่าตัวแปรชื่อ `rawtime` ดังนี้
```c
time_t rawtime;
struct tm * timeinfo;
```
อ่านค่าเวลาจากเครื่องคอมพิวเตอร์ ดังนี้
```c
time (&rawtime);
timeinfo = localtime( &rawtime );
```

ตัวอย่างคำสั่ง
```c
#include <stdio.h>
#include <conio.h>
#include <time.h>
int main (){
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "Current local time and date: %s", asctime (timeinfo) );
    getch();
    return 0;
}
```
Output
```
Current local time and date: Fri Mar 17 00:39:08 2017
```
