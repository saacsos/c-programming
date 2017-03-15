# ASCII Code กับภาษา C #
> by [RatchanonBua](https://github.com/RatchanonBua)
## ASCII Code กับภาษา C เกี่ยวข้องกันอย่างไร? ##
- ASCII Code เป็นค่าตัวเลขแทนอักขระ(Character) เช่น a, b, c, A, B, C รวมถึงคำสั่งที่อยู่บนตาราง ASCII
- ในภาษา C อักขระที่รับเข้ามาจาก Input จะถูกแปลงเป็นรหัส ASCII เพื่อที่จะสามารถนำไปประมวลผลได้
### Example ###
- การแปลง Character เป็นค่า ASCII
```c
#include<stdio.h>
int main(){
char a = 'A';
printf("%d", a);
}
```
> ผลลัพธ์ คือ 65

- การแปลง Integer เป็น Character
```c
#include<stdio.h>
int main(){
int a = 65;
printf("%c", a);
}
```
> ผลลัพธ์ คือ A

*หมายเหตุ* การแปลง Integer เป็น Character, Integer ต้องเป็นค่า 0-127 (เลขฐานสิบ)ตามตาราง ASCII ถึงจะสามารถแสดงผลได้

- การดำเนินการกับ Character
```c
#include<stdio.h>
int main(){
char a = 'A'+1;
printf("%c", a);
}
```
> ผลลัพธ์ คือ B

### ส่วนเสริม ###
- สามารถดูตาราง ASCII Code ได้[ที่นี่](http://www.asciitable.com/)
