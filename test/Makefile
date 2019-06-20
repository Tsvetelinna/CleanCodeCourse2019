CC = g++
CFLAGS = -Wall -std=gnu++0x

ODIR = ../obj

_OBJ = Vehicle.o Car.o Motorbike.o Bus.o Truck.o Parking.o People.o Guard.o Mechanic.o Cleaner.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

all: Test.exe

Test.o: Test.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

Test.exe: $(OBJ) Test.o
	@echo "** Building tester"
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	@echo "** Removing Tester object file and executable..."
	rm -f Tester.exe Tester.o

rebuild: clean all

run: all
		./Test.exe