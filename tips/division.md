# Division #
> by [ploy-thikamporn](https://github.com/ploy-thikamporn)

เทคนิคบางอย่างที่อาจต้องรู้ เพื่อช่วยในการเขียนภาษา C

HOW TO DEVIDE OF TWO NUMBERS ( การหาร โดยใช้ "/" )
*   สำหรับการหาร ถ้าจำนวนทั้ง 2 จำนวนเป็น integer แล้วหารลงตัว
    ```c
    #include <stdio.h>
    int main()
    {
        int a = 4, b = 2, total;
        total = a/b;
        printf("%d", total);  // total = 2
    }
    ```

*   สำหรับการหาร ถ้าจำนวนทั้ง 2 จำนวนเป็น float หรือ double แล้วหารลงตัว
    ```c
    #include <stdio.h>
    int main()
    {
        float a = 4, b = 2, total;
        total = a/b;
        printf("%f", total);  // total = 2.000000
    }
    ```

*   สำหรับการหาร ถ้าจำนวนทั้ง 2 จำนวนเป็น integer แล้วหารลงไม่ตัว
    ```c
    #include <stdio.h>
    int main()
    {
        int a = 5, b = 2, total;
        total = a/b;
        printf("%d", total);  ///** จะพบว่า total = 2
        // ซึ่งค่าที่ได้จริงๆ ควรจะเป็น total = 2.5
    }
    ```

    *   กรณีนี้มีทางแก้ โดยจะต้องให้ type ของตัวแปรใดตัวแปรหนึ่ง เป็น float (จะเปลี่ยนทั้ง 2 ตัวหรือ เพียงตัวเดียวก็ได้)

    ```c
    #include <stdio.h>
    int main()
    {
         float a = 5, b = 2, total;
         total = a/b;
         printf("%f", total);  ///** จะพบว่า total = 2.500000
    }
    ```
    หรือ
    ```c
    #include <stdio.h>
    int main()
    {
         float a = 5, total;
         int b = 2;
         total = a/b;
         printf("%f", total);  // จะพบว่า total = 2.500000
    }
    ```


แต่ถ้าโจทย์ที่ถูกกำหนดข้อมูลเข้าเป็น integer ทั้ง 2 ตัว แต่ต้องการผลที่ได้จากการคำนวณเป็นจำนวนจริง

ต้องกำหนด type ที่ต้องการด้านหน้าของตัวแปรนั้นๆ

```c
#include <stdio.h>
int main()
{
    int a = 5, b = 2;
    printf("%f", (float)a/(float)b);  // total = 2.500000
}
```

-   กรณีที่หารไม่ลงตัว แต่หารด้วยค่าคงที่ สามารถหาค่าได้จากการเติม "." ข้างหลังตัวหารที่เป็นค่าคงที่
    ```c
    #include <stdio.h>
    int main()
    {
        int a = 5;
        printf("%f", a/2.);  // total = 2.500000
    }
    ```

    หรือ เติม ".0"

    ```c
    #include <stdio.h>
    int main()
    {
        int a = 5;
        printf("%f", a/2.0);  // total = 2.500000
    }
    ```
