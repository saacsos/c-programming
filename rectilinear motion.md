นายแว่น ม.6 ผู้มีความรู้ด้านการเขียนโปรแกรมแต่ ติด มผ. วิชาฟิสิกส์จึงโดนอาจารย์ให้ไปเขียนโปรแกรมคำนวณหาการเคลื่อนที่แนวตรง
โดยโปรแกรมจะให้ Input command เป็น v = Speed , s = Distance , t = Time , a = Acceleration
กำหนดให้ Input command สามารถใส่ได้ทั้งตัวใหญ่และตัวเล็ก
ถ้า Input นอกเหนือจากที่กำหนด ให้แสดงผลว่า "Invalid command"
และกำหนดให้ ตัวแปร ทั้งหมดมีค่ามากกว่า 0 ถ้าใส่ค่าน้อยกว่าหรือเท่ากับ 0 ให้แสดงผลว่า "Invalid input"

*##การเคลื่อนที่แนวตรง มีสูตรการคำนวณดังนี้##*
S = V/T
S คือ ระยะทาง มีหน่วยเป็น เมตร
V คือ ความเร็ว มีหน่วยเป็น เมตรต่อวินาที
T คือ เวลา มีหน่วยเป็นวินาที


*##ตัวอย่างโปรแกรมที่ 1##*
[v]:Speed [s]:Distance [t]:Time
Input Command: v
Input a Distance: 5000
Input a time: 30
Total Speed: 166.67 m/s.
*##ตัวอย่างโปรแกรมที่ 2##*
[v]:Speed [s]:Distance [t]:Time
Input Command: s
Input a Speed: 15
Input a Time: 300
Total Distance: 4500.00 m.
*##ตัวอย่างโปรแกรมที่ 3##*
[v]:Speed [s]:Distance [t]:Time
Input Command: t
Input a Distance: 1500
Input a Speed: 30
Total time: 50 sec.
*##ตัวอย่างโปรแกรมที่ 4##*
[v]:Speed [s]:Distance [t]:Time
Input Command: Z
Invalid Command.
*##ตัวอย่างโปรแกรมที่ 5##*
[v]:Speed [s]:Distance [t]:Time
Input Command: s
Input a Speed: 0
Input a Time: 15
Invalid input.
