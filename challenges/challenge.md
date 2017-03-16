 กดเงินจากตู้ ATM

 รับค่าจำนวนเงินที่ต้องการกดจากตู้ATM 
 โปรแกรมจะหาว่าตู้ ATM ต้องจ่ายธนบัตรชนิดใดบ้าง อย่างละกี่ใบ เรียงจากใบที่มีค่ามากที่สุด
 เครื่องจ่ายเงินบรรจุเงินดังนี้
 2000 บาท
 1000 บาท
 500 บาท
 100 บาท
  เครื่องสามารถจ่ายเงินที่น้อยที่สุดคือ 100 บาท มากที่สุด 300000 บาท ถ้ามีเศษที่น้อยกว่า100ให้ปัดขึ้น 
  จะรับค่าต่อไปเรื่อยๆจนกว่าจะนอกเหนือจากเงื่อนไขให้แสดงข้อความ "Get out now!" แล้วจบการทำงาน


	--test case1--
Enter your money = 100
---I will get you---
2000 Baht: - 
1000 Baht: -
500 Baht: -
100 Baht: 1

Enter your money = 300001
"Get out now!" 

	--testcase2--

Enter your money = 111
---I will get you---
2000 Baht: - 
1000 Baht: -
500 Baht: -
100 Baht: 2

Enter your money = -1
"Get out now!"  

	--testcase3--

Enter your money = 10000
---I will get you---
2000 Baht: 5 
1000 Baht: -
500 Baht: -
100 Baht: -

Enter your money = 1500
---I will get you---
2000 Baht: - 
1000 Baht: 1
500 Baht: 1
100 Baht: -

Enter your money = -1
"Get out now!" 
