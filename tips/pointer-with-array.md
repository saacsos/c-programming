# การใช้ Pointer กับ Array #
> by [Faeng](https://github.com/Faeng)

การใช้พอยน์เตอร์กับอาเรย์นั้นมีประโยชน์ เพราะอาเรย์เป็นการเก็บข้อมูลแบบชุดอันดับ และเรียงต่อกัน

```c
#include <stdio.h>

int main(){
    int number[5] = {10, 20, 30, 40, 50};
    int *myPointer = number;
    printf ("first -> %d\n", *myPointer);
    myPointer++;
    printf ("go next -> %d\n", *myPointer);
    myPointer += 3;
    printf ("go next 3 -> %d\n", *myPointer);
    myPointer--;
    printf ("go back -> %d\n", *myPointer);
    return 0;
}
```

ในตัวอย่าง ในการใช้พอยน์เตอร์กับตัวแปรอาเรย์ จะได้ค่าตัวแหน่งแรกของอาเรย์เสมอ ดังนั้น
เราสามารถไปที่ตำแหน่งต่างของอาเรย์ได้ เช่น ไปตำแหน่งถัดไปเราใช้ `myPointer++` และ
ตำแหน่งก่อนหน้าเราใช้ `myPointer--` ไปตำแหน่งที่ต้องการเราจะใช้ `myPointer += n` ดัง
ในตัวอย่างจะได้ผลลัพธ์ดังนี้

```
first -> 10
go next -> 20
go next 3 -> 50
go back -> 40
```

***เพิ่มเติม***
*   Pointer arithmetics  
   พอยน์เตอร์เป็นตัวแปร ดังนั้นเราสามารถใช้การดำเนินการทางคณิตศาสตร์กับพอยน์เตอร์ เช่นเดียวกับตัวแปรได้ แต่สำหรับพอยน์เตอร์แล้วจะเป็นการทำงานกับที่อยู่ของหน่วยความจำแทน
   ยกตัวอย่างเช่น

```c
int foo = 0;
int *p1 = &foo; // 1367;
p1 += 1000; // 2367
p1++;     // 2368

// work with arrays
int a[400];
int *p2 = a;
p2 += 399;
*p2 = 1234;
```
