#Find resistance#
> การอ่านค่าความต้านทานจากแถบสีของตัวต้านทานระบบหัวถึงปลายแบบ 4 แถบสี

ตัวต้านทานแบบ 4 แถบสี มีแถบสีแสดงบนตัวต้านทาน 4 แถบ การอ่านค่า ให้อ่านแถบสีที่อยู่ใกล้ขาตัวต้านทานมากที่สุดเป็นแถบสีที่ 1 แถบสีต่อมา
เป็นแถบสีที่ 2 ทั้ง 2 แถบสีแทนค่าเป็นตัวเลขแล้วอ่านได้โดยตรง ส่วนแถบสีต่อมาเป็นแถบสีที่ 3 เป็นแถบสีตัวคูณหรือจำนวนเลขศูนย์ 0 ที่ต้องเติม
เข้าไปและแถบสีต่อมาเป็นแถบสีที่ 4 เป็นแถบสีแสดงค่าผิดพลาดหรือค่าความคลาดเคลื่น แสดงดังตาราง ค่ารหัสสีตัวต้านทาน
![code_color_resistor](https://cloud.githubusercontent.com/assets/26199876/23832445/dd30ac4e-0766-11e7-9df8-472d9dec291a.jpg)
~~~
  วิธีการอ่านค่าจากตัวต้านทาน
  1st : สีดำ หลักที่ 1 แทนด้วยเลข 0 
  2nd : สีส้ม หลักที่ 2 แทนด้วยเลข 3
  3rd : สีเขียว ตัวคูณ เท่ากับ 100000
  4th : สีเงิน ค่าความคลาดเคลื่อน เท่ากับ +/- 10%
  **ดังนั้น จะอ่านค่าความต้านทานได้ 03 x 100000 +/- 10% หรือเท่ากับ 300000 +/- 10%
~~~
ดังนั้น ให้เขียนโปรแกรมที่แสดงค่าที่อ่านได้จากแถบสีตัวต้านแบบ 4 แถบสี โดยที่
* บรรทัดที่ 1, 2, 3 และ 4 รับชื่อแถบสีที่เป็นตัวย่ออักษรตัวแรก เช่น Red ให้ใส่ข้อมูลเป็น R (ต้องเป็นตัวพิมพ์ใหญ่เท่านั้น!!)
* บรรทัดถัดไป แสดงค่าความต้านานที่อ่านได้ โดยจะต้องแสดงค่าที่ความต้านทานอ่านได้ ค่าความต้านทานต่ำสุด และค่าความต้านทานสูงสุดของตัวต้านท้านในหน่วยโอห์ม

*หมายเหตุ : 
  -  ชื่ถ้าชื่อแถบสีที่กรอกไม่อยู่ในกลุ่มของแต่ละแถบสี ให้แสดง Invalid! sorry we can't find Band color. Please try again. และให้รับแถบสีใหม่จนกว่าจะถูกต้องทั้งหมด
  -  กำหนดให้ชื่อย่อแถบสีเป็นดังนนี้
  
  |Color   | Name|
  |:------|:------|
  |Black | K|
  |Brown | N|
  |Red | R|
  |Orange | O|
  |Yellow | Y|
  |Green | G|
  |Blue | U|
  |Violet | V|
  |Gray | A|
  |White | T|
  |Gold | L|
  |Silver | S|

###Example 1###
~~~
1st Band color: N
2nd Band color: K
3rd Band color: R
4th Band color: L
-------------------------------------
Resistance valuse is : 1000.00 Ohm.
Maximum resistance valuse is : 1050.00 Ohm.
Minimum resistance valuse is : 950.00 Ohm.
~~~
###Example 2###
~~~
1st Band color: Y
2nd Band color: V
3rd Band color: L
4th Band color: L
-------------------------------------
Resistance valuse is : 4.70 Ohm.
Maximum resistance valuse is : 4.94 Ohm.
Minimum resistance valuse is : 4.47 Ohm.
~~~
###Example 3###
~~~
1st Band color: A
2nd Band color: l
3rd Band color: O
4th Band color: U
-------------------------------------
Invalid! sorry we can't find Band color. Please try again.

1st Band color: y
2nd Band color: V
3rd Band color: p
4th Band color: s
-------------------------------------
Invalid! sorry we can't find Band color. Please try again.

1st Band color: Y
2nd Band color: V
3rd Band color: O
4th Band color: S
-------------------------------------
Resistance valuse is : 47000.00 Ohm.
Maximum resistance valuse is : 51700.00 Ohm.
Minimum resistance valuse is : 42300.00 Ohm.
~~~
