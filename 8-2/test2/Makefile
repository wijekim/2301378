CX = g++
CFLAGS = -g -Wall
JOBS = main.o tv.o
TARGET = TV

$(TARGET): $(JOBS)
	$(CX) -o $(TARGET) $(JOBS)

main.o: main.cpp tv.hpp
	$(CX) $(CFLAGS) -c main.cpp

complex.o: tv.cpp tv.hpp
	$(CX) $(CFLAGS) -c shape.cpp

.PHONY: clean

clean:
	rm -f $(TARGET) $(JOBS)
