# C Sample Code #

> เรียนรู้การเขียนโปรแกรม จากโปรแกรมที่ดี

05-function
```c
void func(int param) {

}
func(args);
```

06-array
```c
int array[SIZE];
```

07-pointer
```c
int *arrayPtr = array;
int *elementPtr = &array[0];
```

08-characters-and-strings
```c
char color[] = "blue";
const char *colorPtr = "blue";
char colorArr[] = {'b', 'l', 'u', 'e', '\0'};
```

10-structure
```c
struct structName {
    int member1;
    char *member2;
};
typedef struct structName NewType;
```

11-file-processing
```c
FILE *cfPtr;
cfPtr = fopen("file-name.txt", "w");
fprintf(cfPtr, "%s\n", text);
fclose(cfPtr);
```

15-intro-to-cpp
```c
#include <iostream>
cin >> array[0];
cout << array[0] << endl;
```
