CC = g++
CFLAGS = -Wall -std=gnu++0x

SDIR = src
ODIR = obj

_OBJ = main.o Vehicle.o Car.o Motorbike.o Bus.o Truck.o Parking.o People.o Guard.o Mechanic.o Cleaner.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

BIN = Parking.exe

all: $(BIN)

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBS)

$(BIN): $(OBJ)
	@echo "** Building project"
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	@echo "** Removing object files and executable..."
	rm -f $(BIN) $(ODIR)/*.o

rebuild: clean all
	
run: all
		./$(BIN)