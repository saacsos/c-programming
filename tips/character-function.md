### Character Function ###

ในภาษา c นั้นหากเราต้องการใช้งานเกี่ยวกับตัวอักษร<br/>
เราสามารถดำเนินการได้โดย ใช้ฟังก์ชันใน Libraly `<string.h> <br/>


*   `isalnum()` ตรวจสอบ Arument ที่อยู่ในวงเล็บว่าเป็นพยัญชนะหรือตัวเลขหรือไม่ ถ้าไม่ใช่ทั้ง พยัญชนะและตัวเลขจะส่งค่า 0 กลับ
    ```c
    char var1='a',var2=' ',var3='#',var4='1';
    if(isalnum(var1))
    {
            printf("|%c| is alphanumeric.\n",var1);
    }
    if(isalnum(var2))
    {
            printf("|%c| is alphanumeric.\n",var2);
    }
    if(isalnum(var3))
    {
            printf("|%c| is alphanumeric.\n",var3);
    }
    if(isalnum(var4))
    {
            printf("|%c| is alphanumeric.\n",var4);
    }

    |a| is alphanumeric.
    |1| is alphanumeric.
    ```

*   `isalpha()` ตรวจสอบ Arument ที่อยู่ในวงเล็บว่าเป็นพยัญชนะหรือไม่ ถ้าไม่ใช่ พยัญชนะจะส่งค่า 0 กลับ
    ```c
    char var1='a',var2=' ',var3='#',var4='1';
    if(isalpha(var1))
    {
            printf("|%c| is alphabet.\n",var1);
    }
    if(isalpha(var2))
    {
            printf("|%c| is alphabet.\n",var2);
    }
    if(isalpha(var3))
    {
            printf("|%c| is alphabet.\n",var3);
    }
    if(isalpha(var4))
    {
            printf("|%c| is alphabet.\n",var4);
    }

    |a| is alphabet.
    ```

*   `isdigit()` ตรวจสอบ Arument ที่อยู่ในวงเล็บว่าเป็นตัวเลขหรือไม่ ถ้าไม่ใช่ตัวเลขจะส่งค่า 0 กลับ
    ```c
    char var1='a',var2=' ',var3='#',var4='1';
    if(isdigit(var1))
    {
            printf("|%c| is digit.\n",var1);
    }
    if(isdigit(var2))
    {
            printf("|%c| is digit.\n",var2);
    }
    if(isdigit(var3))
    {
            printf("|%c| is digit.\n",var3);
    }
    if(isdigit(var4))
    {
            printf("|%c| is digit.\n",var4);
    }

    |1| is digit.
    ```

*   `isspace()` ตรวจสอบ Arument ที่อยู่ในวงเล็บว่าเป็นช่องว่างหรือไม่ ถ้าไม่ใช่ช่องว่างจะส่งค่า 0 กลับ
    ```c
    char var1='a',var2=' ',var3='#',var4='1';
    if(isspace(var1))
    {
            printf("|%c| is space.\n",var1);
    }
    if(isspace(var2))
    {
            printf("|%c| is space.\n",var2);
    }
    if(isspace(var3))
    {
            printf("|%c| is space.\n",var3);
    }
    if(isspace(var4))
    {
            printf("|%c| is space.\n",var4);
    }

    | | is space.
    ```
    
