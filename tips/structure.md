# Structure #
> by [poundtheerapat](https://github.com/poundtheerapat)

Structure เป็นวิธีการเก็บตัวแปรหลากชนิดให้อยู่เป็นกลุ่มก้อนเดียวกัน ทำให้สามารถแยกโปรแกรมออกเป็นหน่วย ซึ่งแก้ไขได้ง่ายเพราะสามารถแยกฟังก์ชันและตัวแปรออกเป็นหน่วยๆ

### Syntax ###
```c
struct [structure tag] {
   member definition;
   member definition;
   ...
   member definition;
} [one or more structure variables];  
```

### Example สร้างผ่านตัวแปร ###

```c
struct student{
   char *first;
   char *last;
   char SSN[9];
   float gpa;
   char **classes;
};
int main()
{
	struct student a;
}
```

### Example สร้างโดยตรง ###

```c
int main()
{
	{
	    char *first;
	    char *last;
	    char SSN[10];
	    float gpa;
	    char **classes;
	} student_a;
}
```

### Example สร้างผ่าน typedef ###
```c
typedef struct
{
    char *first;
    char *last;
    char SSN[9];
    float gpa;
    char **classes;
} student;

int main()
{
	student student_a;
}
```

### การเข้าถึงตัวแปร ###
ในการเข้าถึงตัวแปรใช้การเติม.ต่อท้ายชื่อ ของตัวแปรนั้นๆ
```c
typedef struct{
    int month, day, year;
} Date;

void main() {
	Date d1;

	d1.month = 12;
	d1.day = 2;
	d1.year = 1970;
}
```
