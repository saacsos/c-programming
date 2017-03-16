# C Programing Tips #

> เทคนิคบางอย่างที่อาจต้องรู้ เพื่อช่วยในการเขียนภาษา C

### math-code ###
*  HOW TO DEVIDE OF TWO NUMBERS ( การหาร โดยใช้ "/" )
    * สำหรับการหาร ถ้าจำนวนทั้ง 2 จำนวนเป็น "integer" แล้วหารลงตัว 
    ~~~
        #include <stdio.h>
        int main()
        {
            int a = 4, b = 2, total;
            total = a/b;
            printf("%d", total);  /// total = 2 
        }
    
    ~~~
    
    * สำหรับการหาร ถ้าจำนวนทั้ง 2 จำนวนเป็น "float หรือ double" แล้วหารลงตัว 
    ~~~
        #include <stdio.h>
        int main()
        {
            float a = 4, b = 2, total;
            total = a/b;
            printf("%f", total);  /// total = 2.000000 
        }
    
    ~~~
    * สำหรับการหาร ถ้าจำนวนทั้ง 2 จำนวนเป็น "integer" แล้วหารลงไม่ตัว 
    ~~~
        #include <stdio.h>
        int main()
        {
            int a = 5, b = 2, total;
            total = a/b;
            printf("%d", total);  ///** จะพบว่า total = 2 ซึ่งค่าที่ได้จริงๆจะต้องเป็น total = 2.5
        }
    ~~~
        ---------------------------------------------------------------------------------------
        
            * กรณีนี้มีทางแก้ โดยจะต้องให้ type ของตัวแปรใดตัวแปรหนึ่ง เป็น float สามารถทำได้ โดย
            --แก้ไข type ของตัวแปร ให้เป็น float (จะเปลี่ยนทั้ง 2 ตัวหรือ เพียงตัวเดียวก็ได้)
            
               #include <stdio.h>
               int main()
               {
                     float a = 5, b = 2, total;
                     total = a/b;
                     printf("%f", total);  ///** จะพบว่า total = 2.500000
               }
               
               หรือ
               
               #include <stdio.h>
               int main()
               {
                     float a = 5, total;
                     int b = 2;
                     total = a/b;
                     printf("%f", total);  ///** จะพบว่า total = 2.500000
               }
               
             
            
            **แต่ถ้าสำหรับโจทย์ที่ถูกกำหนด ข้อมูลเข้าเป็น integer ทั้ง 2 ตัว แต่ต้องการผลที่ได้จากการคำนวณเป็นเป็นจำนวนจริง คือ
                -กำหนด type ที่ต้องการด้านหน้าของตัวแปรนั้นๆ-
                
                    #include <stdio.h>
                    int main()
                    {
                        int a = 5, b = 2;
                        printf("%f", (float)a/(float)b);  ///** total = 2.500000
                    }
          
                -กรณีที่หารไม่ลงตัว แต่หารด้วยค่าคงที่ สามารถหาค่าได้จากการเติม "." ข้างหลังตัวหารที่เป็นค่าคงที่-
          
                    #include <stdio.h>
                    int main()
                    {
                        int a = 5;
                        printf("%f", a/2.);  ///** total = 2.500000
                    }
             
                    หรือ เติม ".0"
              
                    #include <stdio.h>
                    int main()
                    {
                        int a = 5;
                        printf("%f", a/2.0);  ///** total = 2.500000
                    }
             
              
                    

### standard-input-output ###
*   การรับค่าจาก standard input
   * getchar(character) --> รับค่าอักขระได้ทีละ 1 ตัว
   * gets(string) --> รับค่าอักขระได้ทีละหลายตัว หรือรับข้อความเข้ามา
   * scanf(const char *format, ...) --> รับค่าออกมาตาม format ที่เรากำหนด

*   การพิมพ์ค่าไปที่ standard output
   * putchar(character) --> แสดงค่าออกมาเป็นตัวอักขระ 1 ตัว
   * puts(string) --> แสดงค่าออกมาเป็นข้อมความ 
   * printf(char *format, ...) --> แสดงค่าออกมาตาม format ที่เรากำหนด
   
   _สามารถศึกษา format ของ printf()  และ scanf() ได้ที่ :_
   ***https://wpollock.com/CPlus/PrintfRef.htm*** หรือ ***http://www.codeforwin.in/2015/05/list-of-all-format-specifiers-in-c.html***

   --ยกตัวอย่างการใช้งาน--
     * gets() กับ puts() 
     ~~~
        #include <stdio.h>
        int main() {

            char str[100];

            printf( "Enter a value :");
            gets(str);

            printf( "\nYou entered: ");
            puts(str);

            return 0;
        }
        -----------------------------//result//
        Enter a value : this is test
        You entered: this is test
     ~~~
     * getchar() กับ putchar()
     ~~~
        #include <stdio.h>
        int main() {

            int c;

            printf("Enter a value :");
            c = getchar();

            printf("\nYou entered: ");
            putchar(c);

            return 0;
        }
        -----------------------------//result//
        Enter a value : this is test
        You entered: t
      ~~~
     * scanf() กับ printf()
      ~~~
         #include <stdio.h>
         int main() {

            char str[100];
            int i;

            printf("Enter a value :");
            scanf("%s %d", str, &i); // **สังเกตว่าทำไม ไม่ใส่ & หน้า str เพราะเราเก็บค่าสตริง ซึ่งเป็น อาเรย์ของคาแรคเตอร์

            printf("\nYou entered: %s %d ", str, i);

            return 0;
          }
          -----------------------------//result//
          Enter a value : seven 7
          You entered: seven 7
       ~~~
