CXX = g++.exe

all: fig16_13.exe

GradeBook.o: GradeBook.cpp
	$(CXX) -c GradeBook.cpp

fig16_13.o: fig16_13.cpp
	$(CXX) -c fig16_13.cpp

fig16_13.exe: GradeBook.o fig16_13.o
	$(CXX) -o fig16_13 GradeBook.o fig16_13.o

run:
	fig16_13.exe

clean:
	rm -f *.o fig16_13.exe
