CX = g++
CFLAGS = -g -Wall
JOBS = main.o complex.o
TARGET = adder

$(TARGET): $(JOBS)
	$(CX) -o $(TARGET) $(JOBS)

main.o: main.cpp complex.hpp
	$(CX) $(CFLAGS) -c main.cpp

complex.o: complex.cpp complex.hpp
	$(CX) $(CFLAGS) -c complex.cpp

.PHONY: clean

clean:
	rm -f $(TARGET) $(JOBS)



