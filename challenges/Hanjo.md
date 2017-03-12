# Hanjo's Logic #
Hanjo เป็นนักธนูผู้เก่งกาจและต้องการจะฝึกฝีมือ โดยการฝึกยิงเป้าหมายให้แม่นยำ <br/>
วิธีการคือ ยิงเป้าหมายคำนวณโดยใช้สูตร Projectile<br/>
มีเงื่อนไขในการยิง โดยกำหนดให้ใส่<br/>
input แรก กำหนดระยะทางจาก Hanjo ไปยังเป้าหมาย `จำนวนเต็มบวก` หน่วยเป็นเมตร<br/>
input ที่สอง คือองศาการยิง มีค่าตั้งแต่ `0 ถึง 90`<br/>
input ที่สาม คือความเร็วของลูกธูน `เป็นจำนวนจริงบวก`<br/>

สูตรคำนวณหาระยะทางในแนวราบ `Sx = (u^2)sin(2θ)/g`

### ตัวอย่าง ###
```
EX1.
Enter enemy's distance<metres>: 20

:::::::Eliminate the enemy:::::::

O                                        O
+>                                       +
^________________________________________^

Degree: 30
Arrow's speed: 15
One shot, One kill.
Target Eliminated.
```
```
EX2.
Enter enemy's distance<metres>: 20

:::::::Eliminate the enemy:::::::

O                                        O
+>                                       +
^________________________________________^

Degree: 30
Arrow's speed: 10
You took 11.17m too short, try again.

Degree: 30
Arrow's speed: 15
2 shots, One kill.
Target Eliminated.
```
```
EX3.
Enter enemy's distance<metres>: -1
That's impossible, Hanjo.

Enter enemy's distance<metres>: 0
That's impossible, Hanjo.

Enter enemy's distance<metres>: 10

:::::::Eliminate the enemy:::::::

O                    O
+>                   +
^____________________^

Degree: -30
Arrow's speed: 10
Shooting's ERROR, try something useful.

Degree: 100
Arrow's speed: 10
Shooting's ERROR, try something useful.

Degree: 30
Arrow's speed: -20
Shooting's ERROR, try something useful.

Degree: 30
Arrow's speed: 10
4 shots, One kill.
Target Eliminated.
```

