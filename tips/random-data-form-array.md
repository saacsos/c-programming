# How to generate a random data from Array #
> by [inorin](https://github.com/inorinchan)

## Random data from Array ##
ในภาษา Python เราสามารถ สุ่มข้อมูลจาก Array ได้ง่ายๆ<br/>
โดยการใช้ คำสั่งดังนี้<br/>
### Random ใน Python ###
```python
import random
x = [1, 2, 3, 4]
print(random.choice(x))
# คำสั่ง choice คือการสุ่มจากใน list ที่มี
```
ในภาษา C มี function ที่ชื่อว่า `random()` ที่สามารถสุ่มข้อมูลได้เหมือนกับ random ใน Python <br/>
โดยการ `include <stdlib.h>` เพื่อใช้งาน <br/>

### Random ใน C ###
```c
#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[4] = {1, 2, 3, 4};
    int x;
    x = rand();
    printf("%d",array[x%3]);
}
```

> Tips ค่า x จะ Random มาจากค่าที่สุ่มขึ้นมาดังนั้นเราจึงต้องรู้ว่าจำนวนช่องของ Array มีเท่าไร <br>
> เพราะต้องใช้ในการ mod กับ x การ mod จะได้เลขที่นำไป mod ตั้งแต่ 0 ถึง `n-1` <br>
> เช่น mod ด้วย 9 จะได้เลข 0-8 เป็นต้น

### ข้อเสีย และ วิธีแก้ไข ###
function random ของ C นั้น จะ random เป็นแพทเทิร์นเดิม <br/>
ทำให้เราได้ตัวเลขชุดเดิมๆ แต่มีวิธีการเปลี่ยนแพทเทิร์นการ random คือ function `srand()`

แต่ถึงแม้ว่าเราจะเพิ่มแพทเทิร์นการสุ่มเข้าไป การสุ่มของ `random()` ก็ยังคงมีแพทเทิร์นจำกัดอยู่ดี<br>
เราสามารถแก้โดยการใช้ function `time()` เข้ามาช่วย

`time()` คือ function เวลาในหน่วยวินาที<br>
ที่นับมาตั้งแต่ปี 1970 และมีค่าเพิ่มขึ้นเรื่อยๆ ทำให้แพทเทิร์นการสุ่มเปลี่ยนได้เรื่อยๆ <br/>
สามารถใช้ function `time()` ได้โดยการ `include <time.h>` <br/>
โดยโปรแกรมที่ได้จะออกมาเป็นดังนี้ <br/>

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int array[4] = {1, 2, 3, 4};
    int x;
    srand(time(NULL)); //ส่วนที่เพิ่ม
    x = rand();
    printf("%d",array[x%3]);
}
```

> Function การสุ่มของ `random()` และ `srand()` สามารถนำไปประยุกต์ใช้ได้หลายอย่าง <br/>
> เช่น การทอยลูกเต๋า การสุ่มไพ่ การสุ่มตัวเลข ฯลฯ ทั้งนี้ขึ้นอยู่กับโปรแกรมของ Programmer แต่ละคน 
