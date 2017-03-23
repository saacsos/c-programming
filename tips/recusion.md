# Recursion #
> by [Supaphol](https://github.com/Supaphol)

Recursion เป็นกระบวนการทำซ้ำ ที่สามารถเรียกใช้ฟังก์ชันภายในฟังก์ชันเดียวกันได้ ส่วนมากจะมักนำมาใช้ในการแก้ปัญหาทางคณิตศาสตร์ เช่น การหา Fibonacci, Factorial เป็นต้น

### Fibonacci ###
```c
#include <stdio.h>

int fibonacci(int i) {
    if(i == 0) { // base case
        return 0;
    }

    if(i == 1) { // base case
        return 1;
    }

    // recursion step
    return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

    int i,inp;
    scanf("%d", &inp);
    for (i = 0; i < inp; i++) {
        printf("fibonacci(%d) = %d\t\n", i, fibonacci(i));
    }

    return 0;
}
```
> โค้ดนี้ สร้าง function ชื่อ `fibonacci()` และให้ใส่ค่าโดยที่จะแสดงค่า fibonacci จนถึงตัวที่ต้องการ โดยในฟังชันก์นั้น เราได้ใช้ recursion ในการเรียกซ้ำเพื่อให้สามารถหาค่า fibonacci ของตัวก่อนหน้าทั้ง 2 ตัวได้

### Factorial ###
```c
#include <stdio.h>

int factorial(unsigned int i) {
    if(i <= 1) { // base case
        return 1;
    }

    // recursion step
    return i * factorial(i - 1);
}

int  main() {
    int i ;
    scanf("%d", &i);
    printf("Factorial of %d is %d\n", i, factorial(i));
    return 0;
}
```
> โค้ดนี้ สร้าง function ชื่อ `factorial()` ขึ้นมา และให้ใส่ค่าโดยที่จะแสดงค่า factorial ของตัวนั้นมีค่าเท่าไร โดยใช้ recursion ในการนำค่าของตัวก่อนหน้ามาคำนวณต่อ

***ข้อควรระวัง***

การใช้ recursion สะดวกก็จริง แต่อาจทำให้โปรแกรมของคุณใช้เวลามากขึ้น และต้องมีความระมัดระวังในการกำหนดเงื่อนไขมิฉะนั้นจะสามารถติดลูปได้
