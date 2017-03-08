# Math Code #
> รวมฟังก์ชั่นหรือส่วนของโค้ดในการคำนวณทางคณิตศาสตร์ที่ใช้บ่อย

### การยกกำลังตัวเลขจำนวนเต็ม (integers) ###
> by [dottydaily](https://github.com/dottydaily)

```c
int my_pow(int n)
{
    return n*n;
}
```

***หมายเหตุ***: ไม่ควรใช้ฟังก์ชั่น `pow()` ใน library `math.h` เพราะเนื่องจาก `pow()` ถูกสร้างมาเพื่อยกกำลังเลขทศนิยม การนำมาใช้กับจำนวนเต็มจะทำให้ค่าผิดเพี้ยนได้

### การหารากที่สองของตัวเลข ###
> by [dottydaily](https://github.com/dottydaily)

-   ใช้ฟังก์ชั่น sqrt จาก library math.h
    ```c
    #include <stdio.h>
    #include <math.h>

    int main()
    {
        printf("sqrt of 4 is %.2f", sqrt(4.0));
        return 0;
    }
    ```

    ***หมายเหตุ***: `sqrt()` ใช้ถอดรากของข้อมูลที่เป็น `float` หรือ `double` เท่านั้น


### การหาเศษจากการหารจำนวนทศนิยม ###
> by [dottydaily](https://github.com/dottydaily)

-   ใช้ฟังก์ชั่น fmod ใน Library math.h
    ```c
    #include <stdio.h>
    #include <math.h>

    int main()
    {
        printf("Mod of 3.14 with 1.2 = %.2f", fmod(3.14, 1.2));
    }
    ```

    ***หมายเหตุ***: fmod ใช้กับจำนวนประเภท ทศนิยม เท่านั้น

### การหาค่าสัมบูรณ์ของตัวเลข ###
> by [dottydaily](https://github.com/dottydaily)

-   ใช้ฟังก์ชั่น abs ใน Library stdlib.h
    ```c
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        printf("Absolute value of -5 is %d", abs(-5));
    }
    ```

    ***หมายเหตุ***: abs ใช้กับจำนวนประเภท integer เท่านั้น**
