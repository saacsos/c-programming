# Enumerated types (enum) #
> by [porschporsch](https://github.com/porschporsch)

ประเภทข้อมูลอีกแบบหนึ่งที่น่าสนใจคือประเภทข้อมูลแบบ enum
ซึ่งเป็นข้อมูลแทนจำนวนเต็มที่แสดงใน String literal
โดยค่าของมันสามารถเป็นข้อมูลประเภทไหนก็ได้
ที่ ***ไม่ใช่***  Keyword ในภาษา C ซึ่งมีรูปแบบดังนี้:

```c
enum type_name {
  value1, value2, value3, ...
} object_names;
```

คำสั่ง enum ใช้สำหรับการสร้าง และตามด้วย `type_name`
ชื่อของ enum และในวงเล็บ `{}` เป็นการกำหนดค่าให้กับตัวแปร enum
ซึ่งเป็นตัวอักษรใดๆ ที่ยัง ***ไม่ได้***  มีอยู่หรือเป็น keyword ในภาษา C

มาดูตัวอย่างการสร้างและใช้งาน

```c
enum day_m {
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
}
```

ในตัวอย่างได้สร้างตัวแปร enum `day_m`
โดยปกติแล้ว ค่าของข้อมูลใน enum ให้ถูกแปลงค่าให้เป็น integer โดยปริยาย
โดยมันจะมีค่าเริ่มต้นจาก 0, 1, 2, ...
ดังนั้น `sunday` นั้นเท่ากับ `0`, `monday` เป็น `1`, `tuesday` เป็น `2` ตามลำดับ


### ตัวอย่างการใช้งาน enum ในภาษา C ###
```c
#include <stdio.h>

enum continent { america, antarctica, europe, asia, africa, australia };

int main() {
    enum continent myContinent;
    int i;
    myContinent = america;
    printf("%d\n", myContinent);
    for(i = 1; i <= australia; i++)
        printf("%d\n", myContinent + i);
    return 0;
}
```

ผลลัพธ์การทำงานของโปรแกรม
```
0
1
2
3
4
5
```


ในตัวอย่างได้ประกาศ enum สำหรับ 6 ทวีปในโลก โดยกำหนดชื่อของทวีปต่างๆ ลงในตัวแปร enum `continent` โดยที่ `america` จะมีค่าเป็น `0` <br>
และจะเพิ่มค่าไปเรื่อยๆ จนถึง `australia` ซึ่งมีค่าเป็น `5`
เป็นผลลัพธ์การทำงานของโปรแกรม ซึ่งค่าที่แสดงออกมานั้นเป็น Integer ตามลำดับของทวีปต่างๆ

### enum แบบค่ากำหนดเอง ###

ในภาษา C นั้นเราสามารถกำหนดค่าให้กับ enum เองได้ด้วย โดยค่าที่กำหนดให้กับ enum นั้นจะต้องเป็นจำนวนเต็มใดๆ

มาดูตัวอย่างการใช้งาน enum แบบค่ากำหนดเอง

#### ตัวอย่างการใช้งาน enum แบบกำหนดค่าเอง ####
```c
#include <stdio.h>
enum ocean {
    arctic = 0,
    atlantic = 1,
    indian = 10,
    pacific = 50,
    southern = -1
};
int main() {
    enum ocean oc;
    oc = indian;
    printf("Ocean %d\n", oc);
    oc = southern;
    printf("Southern %d\n", oc);
    return 0;
}
```

ผลลัพธ์การทำงานของโปรแกรมในการใช้งาน enum แบบกำหนดค่าเอง
```
Ocean 10
Southern -1
```

ในตัวอย่างได้ประกาศตัวแปร enum ของ 5 มหาสมุทรของโลก
และในตอนนี้ได้กำหนดค่าให้กับค่าของ enum ซึ่งเป็นได้ทั้งจำนวนเต็มบวกและจำนวนเต็มลบ
และใช้งานเหมือนตัวแปร enum ปกติ
