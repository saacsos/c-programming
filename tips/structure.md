# Structure #

struct ทำหน้าที่คล้ายๆ class ใน python นั่นคือทำหน้าที่เหมือนเป็นแม่พิมพ์ โดยเราสามารถให้คนที่เราต้องการให้ใช้มาใช้เเเม่พิมพ์ของเราในการทำงานได้
struct [structure tag] {

   member definition;
   member definition;
   ...
   member definition;
} [one or more structure variables];  
Example :
-------------------------------------
struct animal{ //กำหนดแม่พิพ์ใช้ชื่อว่า animal โดย animal มี leg เก็บไว้ให้ใช้
	int leg;
};

struct animal a; // a จะมาใช้ animal ในการสร้าง leg ของ a
a.leg=1;
struct animal b;// b ก็จะมาใช้ animal ในการสร้าง leg ของ b
b.leg=2;

printf("%d %d",a.leg,b.leg);
// Output = 1 2
--------------------------------------