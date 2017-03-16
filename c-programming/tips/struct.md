# Struct #

Structure เป็นวิธีการเก็บตัวแปรหลากชนิดให้อยู่เป็นกลุ่มก้อนเดียวกัน ทำให้สามารถแยกโปรแกรมออกเป็นหน่วย ซึ่งแก้ไขได้ง่ายเพราะสามารถแยกฟังก์ชันและตัวแปรออกเป็นหน่วยๆ 

### Syntax ###

struct{
	var;
};

### Example สร้างผ่านตัวแปร ###

struct student{
	{ 
   char *first; 
   char *last; 
   char SSN[9]; 
   float gpa; 
   char **classes; 
};

struct student a;


### Example สร้างโดยตรง ###

{ 
    char *first; 
    char *last; 
    char SSN[10]; 
    float gpa; 
    char **classes; 
} student_a;

### Example สร้างผ่าน typedef  ###

typedef struct
{ 
    char *first; 
    char *last; 
    char SSN[9]; 
    float gpa; 
    char **classes; 
} student; 

student student_a;

### การเข้าถึงตัวแปร ###
ในการเข้าถึงตัวแปรใช้การเติม.ต่อท้ายชื่อ ของตัวแปรนั้นๆ

{
  int month, day, year;
} DATE;

void main() {
  DATE d1;

  d1.month = 12;
  d1.day = 2;
  d1.year = 1970;
}

