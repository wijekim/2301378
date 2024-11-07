CX = g++
CFLAGS = -g -Wall
JOBS = main.o power.o
TARGET = adder

$(TARGET): $(JOBS)
	$(CX) -o $(TARGET) $(JOBS)

main.o: main.cpp power.hpp
	$(CX) $(CFLAGS) -c main.cpp

power.o: power.cpp power.hpp
	$(CX) $(CFLAGS) -c power.cpp

.PHONY: clean

clean:
	rm -f $(TARGET) $(JOBS)
