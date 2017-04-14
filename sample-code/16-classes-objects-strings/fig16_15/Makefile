CXX = g++.exe

all: fig16_17.exe

GradeBook.o: GradeBook.cpp
	$(CXX) -c GradeBook.cpp

fig16_17.o: fig16_17.cpp
	$(CXX) -c fig16_17.cpp

fig16_17.exe: GradeBook.o fig16_17.o
	$(CXX) -o fig16_17 GradeBook.o fig16_17.o

run:
	fig16_17.exe

clean:
	rm -f *.o fig16_17.exe
