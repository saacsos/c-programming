//by kanon </br>
ให้เพื่อนๆสร้างโปรแกรมโดยการใส่ข้อมูลเป็นจำนวนเต็มบวกเพื่อสร้างรูป3 และ 4เหลี่ยมตามinputที่เข้ามา และ ในรูปเหลี่ยมนั้นจะมีตัวAlphabet ต่างๆตั้งแต่a-z </br>
โดยไล่ตั้งแต่a-ข้อมูลนำเข้า</br>
ข้อมูลinput</br>
```
บรรทัดที่ 1 :เป็นค่าเหลี่ยมของรูปนี้โดยที่มีค่าตั้งแต่3-4
บรรทัดที่ 2 :a-z
```
*ถ้าค่าเหลี่ยมที่เข้ามาไม่ใช่3-4 ให้พิมพ์คำว่า "Error Angle" </br>
*ถ้าตัวอักษรที่เข้ามาไม่ใช่a-zให้พิมพ์คำว่า "Error Alpha" </br>
*หรือถ้าไม่ใช่ทั้งสองอย่าง ให้พิมพ์ทั้งสองประโยค</br> 
Input:</br>
```
3
b
```
Output:</br>
``` 
  b
 bab
bbbbb
```
Input:</br>
```
5
/
```
Output:</br>
```
Error Angle
Error Alpha
```
Input:</br>
```
4
c
```
Output:</br>
```
ccccc
cbbbc
cbabc
cbbbc
ccccc
```
Input:</br>
```
3
a
```
Output:</br>
```
a
```
Input:</br>
```
3
d
```
Output:</br>
```       
       d 
      dcd
     dcbcd
    dcbabcd
   dcbbbbbcd  
  dcccccccccd
 ddddddddddddd
```
Input:</br>
```
-1
a
```
Output:</br>
```
Error Angle
```
Input:</br>
```
4
d
```
Output:</br>
```
ddddddd
dcccccd
dcbbbcd
dcbabcd
dcbbbcd
dcccccd
ddddddd
```
