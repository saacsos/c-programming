สถานบริการตัดแต่งขนแมวแห่งหนึ่ง มีบริการ 3 อย่าง ให้ลูกค้าเลือกสำหรับแมว สิ่งมีชีวิตอันเป็นที่รัก
	1. บริการอาบน้ำแมว 200 บาท ต่อการรับบริการหนึ่งครั้ง
	2. บริการตัดขนแมว 500 บาท ต่อการรับบริการหนึ่งครั้ง
	3. บริการนวดแมว 600 บาท ต่อการรับบริการหนึ่งครั้ง
- ให้รับข้อมูลนำเข้าจากลูกค้า ว่าต้องการรับบริการจากทางร้านหรือไม่
	> หากลูกค้าป้อน Y (ทั้งตัวพิมพ์เล็กและใหญ่) จะถือว่าต้องการรับบริการจากทางร้าน
	> หากป้อนอักขระอื่นๆ ที่ไม่ใช่ Y โปรแกรมจะสิ้นสุดการทำงานทันที  
- ในกรณีที่ลูกค้าต้องการรับบริการจากทางร้าน
	> โปรแกรมจะขึ้นบริการที่มีให้ลูกค้าเลือก
		- Bath (key "y" for Yes): 
		- Cutting (key "y" for Yes): 
		- Massage (key "y" for Yes): 
	> เขียนสรุปเป็นข้อว่าลูกค้าเลือกรับบริการใดไปบ้าง
	> คำนวณราคาที่ลูกค้าต้องจ่ายทั้งหมดในการใช้บริการครั้งนั้น แล้วถามลูกค้าว่าต้องการรับบริการครั้งต่อไปจากทางร้านหรือไม่
	> กรณีที่ลูกค้าไม่รับบริการใดๆ เลยให้โปรแกรมกลับไปถามใหม่ว่าต้องการรับบริการจากทางร้านหรือไม่	
และเพื่อเป็นการเอาใจลูกค้า ทางร้านจึงกำหนด point ขึ้นมา เป็นการสะสมแต้มจากค่าบริการ เมื่อ point ครบ 30 point 
ค่าบริการรวมครั้งนั้นจะลดลง 20% และเริ่มนับ point ใหม่ โดยเริ่มจาก point ที่เหลือลบด้วย 30
	ค่า point คิดจาก ค่าบริการในแต่ละครั้งหารด้วย 100 สะสมขึ้นไปเรื่อยๆ
- ให้โปรแกรมแสดงค่า point ที่เหลือ หลังจากแสดง ค่าบริการในครั้งนั้นๆ
- ค่า point จะถูกคิดจากราคาบริการรวมทันทีเมื่อลูกค้าป้อนบริการที่ต้องการรับเสร็จเรียบร้อย แล้วจึงนำมาคิดส่วนลด 


ตัวอย่าง 1
- - - Wellcome to Cat Cut Cut - - -

Would you like to use our service? (key "y" for continue): h

---<<< Goodbye (-_-)! >>>---


ตัวอย่าง 2
- - - Wellcome to Cat Cut Cut - - -

Would you like to use our service? (key "y" for continue): Y

- - - Choose the service - - -
Bath (key "y" for Yes): Y
Cutting (key "y" for Yes): y 
Massage (key "y" for Yes): y 

- - - SUMMARIZE - - -
.....1) You choose >>> Bath.
.....2) You choose >>> Cutting.
.....3) You choose >>> Massage.
Total amount: 1300.00 Baht.
Your point: 13.00 Point.

Would you like to use our service? (key "y" for continue): y

- - - Choose the service - - -
Bath (key "y" for Yes): y
Cutting (key "y" for Yes): i
Massage (key "y" for Yes): y 

- - - SUMMARIZE - - -
.....1) You choose >>> Bath.
.....2) You choose >>> Massage.
Total amount: 800.00 Baht.
Your point: 21.00 Point.

Would you like to use our service? (key "y" for continue): y

- - - Choose the service - - -
Bath (key "y" for Yes): y
Cutting (key "y" for Yes): y
Massage (key "y" for Yes): y 

- - - SUMMARIZE - - -
.....1) You choose >>> Bath.
.....2) You choose >>> Cutting.
.....3) You choose >>> Massage.
Total amount: 1040.00 Baht.
Your point: 4.00 Point.

Would you like to use our service? (key "y" for continue): k

---<<< Goodbye (-_-)! >>>---


ตัวอย่าง 3
- - - Wellcome to Cat Cut Cut - - -

Would you like to use our service? (key "y" for continue): Y

- - - Choose the service - - -
Bath (key "y" for Yes): s
Cutting (key "y" for Yes): a 
Massage (key "y" for Yes): d 

Would you like to use our service? (key "y" for continue): y

- - - Choose the service - - -
Bath (key "y" for Yes): s
Cutting (key "y" for Yes): a 
Massage (key "y" for Yes): y

- - - SUMMARIZE - - -
.....1) You choose >>> Massage.
Total amount: 600.00 Baht.
Your point: 6.00 Point.

Would you like to use our service? (key "y" for continue): r

---<<< Goodbye (-_-)! >>>---
