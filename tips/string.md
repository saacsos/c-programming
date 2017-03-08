# String #
> By [Tanamet](https://github.com/Tanamet)
>

ในภาษา c การดำเนินการกับ String นั้นทำได้ ค่อนข้างยาก<br/>
โดยในภาษา c จะเก็บ String ในรูปของ char ที่เป็นarray<br/>
`char string[] = "Hello, World";`<br/>
นอกจากนี้ยังมี Library ในการดำเนินการกับ String คือ `<string.h>`

### ฟังก์ชันใน `<string.h>` ###

*   `strlen()` นับความยาวของ String
    ```c
    n = strlen("Hello");
    n = 5;
    ```

*   `strcmp()` เทียบค่าของ String โดยตรวจสอบจาก ASCII Code ของแต่ละอักขระ
    ```c
    if ( strcmp(str1, str2) > 0 )
      printf("%s is greater than %s", str1, str2);
    else if( strcmp(str1,str2) == 0 )
      printf("%s is equal to %s", str1, str2);
    else
      printf("%s is less than %s", str1, str2);
    ```

*   `strcpy()` คัดลอก String
    ```c
    char str1[] = "Hello";
    char str2[10];
    strcpy(str2, str1); // str2 = "Hello"
    ```

*   `strcat()` เชื่อม String
    ```c
    char str1[] = "Hello,";
    char str2[] = "World";
    strcat(str1, str2); // "Hello, World"
    ```
    
