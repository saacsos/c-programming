#Escape Character  
     หมายถึง เครื่องหมายหรือ อักขระบางอย่างที่่เราไม่สามารถเขียนโค๊ดเพื่อเเสดงอย่างตรงไปตรงมาได้ 
เช่น เครื่่องหมายคำพูดหรือDouble qoute เพราะเครื่องหมายนี้ใช่สำหรับบอกข้อความว่าเป็น Stringว่าเริ่มต้นเเละสิ้นสุดตรงไหน
ดังนั้นเพือที่จะให้เครื่องหมาย " Double qoute เเสดงออกมาจะต้องใช่ \ Backslash ด้วย ก็จะได้เป็น \"  นอกจากจะมีเครื่องหมาย " 
เเล้วยังมีอักขระบางตัวที่เราไม่สามารถพิมพ์บนนคีย์บอร์ดได้ เพราะมันไม่มีเช่น อักขระขึ้นบรรทัดใหม่ม อักขระเเท็บ เป็นต้น
เเล้วเวลาเราต้องการใช่จะต้องทำยังไงล่ะ ก็ง่ายๆเลย เราก็เอาเครื่องหมาย \ (Backslash) หรือ Escape character 
ไปวางหน้าอักขระเหล่านั้นซึ่งจะทำให้อักขระที่ตามหลัง \ หนึ่งตัวมีความหมายเปลี่่ยนไปจากเดิมเช่น n จากเดิมเเสดงผลเป็น n ซึ่งเป็นตัวอักษรภาษาอังกฤษ
เเต่พอมาอยู่ข้างหลัง Escape character เเล้วจะเปลรายนเป็นขึ้นบรรทัดใหม่ทันที

ตัวอย่าง Escape character

      \t หมายถึง อักขระ เเท็บ
      \0 หมายถึง อักขระ NULL(ว่างเปล่า)
      \" หมายถึง อักขระ "
      \' หมายถึง อักขระ '
      \ \หมายถึง อักขระ \


#Example
int main()

{

     printf("\'\\n\' is a New line character.\n\t'\\t' is a Tab character.");
     
}

Out put
     
    '\n' is a New line character.

          '\t' is a Tab character.