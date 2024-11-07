CX = g++
CFLAGS = -g -Wall
JOBS = main.o book.o
TARGET = adder

$(TARGET): $(JOBS)
	$(CX) -o $(TARGET) $(JOBS)

main.o: main.cpp book.hpp
	$(CX) $(CFLAGS) -c main.cpp

power.o: book.cpp book.hpp
	$(CX) $(CFLAGS) -c book.cpp

.PHONY: clean

clean:
	rm -f $(TARGET) $(JOBS)
