นายแว่น ม.6 ผู้มีความรู้ด้านการเขียนโปรแกรมแต่ ติด มผ. วิชาฟิสิกส์จึงโดนอาจารย์ให้ไปเขียนโปรแกรมคำนวณหาการเคลื่อนที่แนวตรง<br/>
โดยโปรแกรมจะให้ Input command เป็น v = Speed , s = Distance , t = Time , a = Acceleration<br/> 
กำหนดให้ Input command สามารถใส่ได้ทั้งตัวใหญ่และตัวเล็ก ถ้า Input นอกเหนือจากที่กำหนด ให้แสดงผลว่า "Invalid command"<br/> 
และกำหนดให้ ตัวแปร ทั้งหมดมีค่ามากกว่า 0 ถ้าใส่ค่าน้อยกว่าหรือเท่ากับ 0 ให้แสดงผลว่า "Invalid input"<br/>

*##การเคลื่อนที่แนวตรง มีสูตรการคำนวณดังนี้##*<br/>
S = V/T S คือ ระยะทาง มีหน่วยเป็น เมตร<br/>
V คือ ความเร็ว มีหน่วยเป็น เมตรต่อวินาที<br/>
T คือ เวลา มีหน่วยเป็นวินาที<br/>

*##ตัวอย่างโปรแกรมที่ 1##*<br/>
[v]:Speed [s]:Distance [t]:Time<br/> 
Input Command: v<br/> 
Input a Distance: 5000<br/> 
Input a time: 30<br/> 
Total Speed: 166.67 m/s.<br/> 
*##ตัวอย่างโปรแกรมที่ 2##*<br/> 
[v]:Speed [s]:Distance [t]:Time<br/>
Input Command: s<br/> 
Input a Speed: 15<br/> 
Input a Time: 300<br/> 
Total Distance: 4500.00 m.<br/>
*##ตัวอย่างโปรแกรมที่ 3##*<br/> 
[v]:Speed [s]:Distance [t]:Time<br/> 
Input Command: t<br/>
Input a Distance: 1500<br/>
Input a Speed: 30<br/> 
Total time: 50 sec.<br/> 
*##ตัวอย่างโปรแกรมที่ 4##*<br/> 
[v]:Speed [s]:Distance [t]:Time<br/> 
Input Command: Z<br/>
Invalid Command.<br/>
*##ตัวอย่างโปรแกรมที่ 5##*<br/>
[v]:Speed [s]:Distance [t]:Time<br/> 
Input Command: s<br/> 
Input a Speed: 0<br/> 
Input a Time: 15<br/> 
Invalid input.<br/>
