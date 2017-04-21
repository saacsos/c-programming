CXX = g++.exe

all: fig18_05.exe

fig18_05.exe: fig18_05.o PhoneNumber.o 
	$(CXX) -o fig18_05.exe fig18_05.o PhoneNumber.o

PhoneNumber.o: PhoneNumber.cpp
	$(CXX) -c PhoneNumber.cpp

fig18_05.o: fig18_05.cpp
	$(CXX) -c fig18_05.cpp

run:
	fig18_05.exe

clean:
	rm -f *.o fig18_05.exe
