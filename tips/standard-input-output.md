# Standard Input Output #
> การรับค่า/ส่งค่าเบื้องต้นที่ควรทราบ

### Function Input พื้นฐานที่ควรรู้ ###
> by [dottydaily](https://github.com/dottydaily)

1.  `scanf("%format1 %format2 ...", &var1, &var2, ...");`

    `%d` ใช้กับตัวแปรประเภท int

    `%f` ใช้กับตัวแปรประเภท float

    `%lf` ใช้กับตัวแปรประเภท double (หรือเรียกอีกอย่างว่า long float)

    `%u` ใช้กับตัวแปรประเภท unsigned int (ไม่มีค่าลบ)

    `%c` ใช้กับตัวแปรประเภท char (ใช้ %s สำหรับ string)

2.  `getchar();`

    ใช้รับตัวอักขระ โดยตัวแปรที่ใช้รับค่าต้องสามารถรับค่าข้อมูลอักขระได้ (เช่น char, int)

    วิธีใช้คือ `var_name = getchar();`

    ***ข้อควรระวัง***
    หลีกเลี่ยงการใช้ scanf หรือ getchar ในการรับข้อมูลประเภท char หรือ string ติดกันสองครั้ง

    ```c
    #include <stdio.h>
    int main()
    {
        char a, b;

        scanf("%c", &a);
        printf("%c", a);

        scanf("%c", &b);
        printf("%c", b);

        return 0;
    }
    ```
    จากตัวอย่าง เมื่อป้อนค่า `a` แล้วกด enter โปรแกรมจะส่งค่า new line (`'\n'`) ไปให้ `b` ทันที

    อ่านสาเหตุเพิ่มเติมได้ที่ [http://stackoverflow.com/questions/13473693/scanf-getchar-function-is-skipped]("http://stackoverflow.com/questions/13473693/scanf-getchar-function-is-skipped"))

    หากมีความจำเป็นจริงๆ สามารถแก้ปัญหาได้ด้วยการเติม `getchar();` เข้าไปคั่นระหว่างสองคำสั่งนี้
    ```c
    #include <stdio.h>
    int main()
    {
        char a, b;

        scanf("%c", &a);
        printf("%c", a);

        getchar(); // add getchar(); between scanf()

        scanf("%c", &b);
        printf("%c", b);

        return 0;
    }
    ```

### Function Output พื้นฐานที่ควรรู้ ###
> by [dottydaily](https://github.com/dottydaily)

1.  `printf("ข้อความ ... %format1 %format2...", var1, var2);`

     Format ที่ใช้นั้นเหมือนกันกับของ `scanf`

     **ลูกเล่นกับ Format**

    -   หากใส่เลขข้างหน้า format จะเป็นการกำหนดความยาวที่จะปริ้นท์

         เช่น `printf("%2d", 1);` จะปริ้นท์ออกมาว่า `" 1"` (มีทั้งหมด 2 ช่องรวมถึงค่า 1)

    -   หากใส่เลขข้างหลัง `.` ของ format ของ float หรือ double จะเป็นการกำหนดตำแหน่งทศนิยมสูงสุดที่ต้องการแสดงผล

2.  `putchar(char);`

    เช่น `putchar('C');` Output ที่ออกมาคือ C

    ```c
    a = 'G';
    putchar(a);
    // Output ที่ออกมาคือ G
    ```

3.  `puts(ชุดข้อมูล String);`

    เช่น `puts("HELLO");` Output ที่ออกมาคือ HELLO

    ***หมายเหตุ***: การใช้ puts เมื่อแสดงผลข้อมูลเสร็จแล้วจะปริ้นท์ขึ้นบรรทัดใหม่ให้อัตโนมัติ
