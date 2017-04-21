CXX = g++.exe
std = -std=c++11

all: fig18_08.exe

fig18_08.exe: fig18_08.o Date.o
	$(CXX) $(std) -o fig18_08.exe fig18_08.o Date.o

Date.o: Date.cpp
	$(CXX) $(std) -c Date.cpp

fig18_08.o: fig18_08.cpp
	$(CXX) $(std) -c fig18_08.cpp

run:
	fig18_08.exe

clean:
	rm -f *.o fig18_08.exe
