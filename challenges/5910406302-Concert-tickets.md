บริษัทจำหน่ายตั๋วแห่งหนึ่งเปิดจองบัตรการแสดงของศิลปินต่างประเทศวงหนึ่ง โดยมีราคาบัตร 1200 , 2000 , 3200 , 4500 และ 5000 จงเขียนโปรแกรมคำนวณราคาบัตรและแสดงค่าใช้จ่าย โดยมีเงื่อนไขดังนี้
- จองบัตรได้ครั้งละไม่เกิน 4 ใบ (รวมทุกราคา)
- บัตรราคา 5000 บาท สามารถเลือกโซนได้คือ A และ B
- บัตรราคา 4500 บาท สามารถเลือกโซนได้คือ C – F
- บัตรราคา 3200 บาท สามารถเลือกโซนได้คือ G - L
- บัตรราคา 2200 บาท สามารถเลือกโซนได้คือ M - S
- บัตรราคา 1200 บาท สามารถเลือกโซนได้คือ T – Z
- ตัวอักษรสำหรับการเลือกโซนเป็นตัวพิมพ์ใหญ่เท่านั้น
- กรณีโซนที่เลือกไม่สอดคล้องกับราคาบัตรหรือใส่ตัวอักษรพิมพ์เล็กให้แสดงข้อความ ‘Invalid zone, please enter zone again.’
- กรณีราคาบัตรผิดให้แสดงข้อความ ‘Invalid price, please enter price again.’
- กรณีสั่งซื้อบัตรเกิน 4 ใบให้แสดงข้อความ ‘Can not sell more than 4 tickets, please enter amount of ticket again.’
- โปรแกรมจะจบการทำงานเมื่อราคาเป็น 0 หรือจองบัตรครบ 4 ใบ


ตัวอย่างข้อมูล Input/Output 1
Welcome !~
- - - - - - - - - - - - - - - - - - - -

Price : 1200
Amount of ticket : 1
Zone :  T

Price : 4500
Amount of ticket : 2
Zone :  D

Price : 0

- - - - - - - - - - - - - - - - - - - - 
Total 10200 Bath.

ตัวอย่างข้อมูล Input/Output 2
Welcome !~
- - - - - - - - - - - - - - - - - - - -

Price : 3200
Amount of ticket : 2
Zone :  L

Price : 2200
Amount of ticket : 2
Zone :  n
Invalid zone, please enter zone again.
Zone : N

- - - - - - - - - - - - - - - - - - - - 
Total 10800 Bath.
 
ตัวอย่างข้อมูล Input/Output 3
Welcome !~
- - - - - - - - - - - - - - - - - - - -

Price : 220
Invalid price, please enter price again.
Price : 2200
Amount of ticket : 5
Can not sell more than 4 tickets, please enter amount of ticket again.
Amount of ticket : 2
Zone :  A
Invalid zone, please enter zone again.
Zone : N

Price : 0

- - - - - - - - - - - - - - - - - - - - 
Total 4400 Bath.