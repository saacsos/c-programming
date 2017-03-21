#include <windows.h>

#define COLOR_BLACK			0

#define COLOR_DARKBLUE		1

#define COLOR_DARKGREEN		2

#define COLOR_AQUA			3

#define COLOR_DARKRED		4

#define COLOR_DARKVOILET	5

#define COLOR_DARKYELLOW	6

#define COLOR_GRAY			7

#define COLOR_DARKGRAY		8

#define COLOR_BLUE			9

#define COLOR_GREEN 		10

#define COLOR_CYAN			11

#define COLOR_RED			12

#define COLOR_VIOLET		13

#define COLOR_YELLOW		14

#define COLOR_WHITE			15

#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)

#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
