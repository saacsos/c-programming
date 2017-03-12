หนูนิดชอบดูดวงจันทร์เป็นอย่างมาก หนูนิดอยากรู้ว่าวันไหนที่หนูนิดจะมองเห็นดวงจันทร์ที่มีลักษณะดังต่อไปนี้ได้ในวันที่เท่าไหร่บ้าง

>1.ดวงจันทร์ครึ่งเสี้ยวทางด้านขวา หรือ วันขึ้น 8 ค่ำ ให้แสดงข้อความ "First Quarter Phase."
>
>2.ดวงจันทร์เต็มดวง หรือ วันขึ้น 15 ค่ำ ให้แสดงข้อความ "Full Moon Phase."
>
>3.ดวงจันทร์ครึ่งเสี้ยวทางด้านซ้าย หรือ วันแรม 8 ค่ำ ให้แสดงข้อความ "Third Quarter Phase."
>
>4.ไม่สามารถมองเห็นดวงจันทร์เบย หรือ วันแรม 15 ค่ำ ให้แสดงข้อความ "NEW Moon Phase."
  
โดยมีรูปแบบการรับข้อมูลคือ n มีค่าตั้งแต่ 1-365 และ *กำหนดให้วันที่ 1 มกราคม 2560 เป็นวันที่พระจันทร์เต็มดวง* และเดือนกุมภาพันธ์มี 28 วัน

-ถ้าวันที่นั้นอยู่ในช่วง วันขึ้น 1-7 ค่ำ และ 9-14 ค่ำ ให้แสดงข้อความว่า "The moon is waxing."

-ถ้าวันที่นั้นอยู่ในช่วง วันแรม 1-7 ค่ำ และ 9-14 ค่ำ ให้แสดงข้อความว่า "The moon is waning."

-ถ้า n ที่รับเข้ามา ไม่อยู่ในช่วง 1 - 365 ให้แสดงข้อความ "Error."
          
          
Case1

```
input : 224
output : 12/08/60
The moon is waning.
```

Case2
       
```
input : 143
output : 23/05/60
The moon is waxing.
```

Case3
       
```  
input : 46
output : 15/02/60
NEW Moon Phase.
```      

Case4

```       
input : 366
output : Error.
```       