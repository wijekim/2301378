CX = g++
CFLAGS = -g -Wall
JOBS = main.o shape.o
TARGET = Shape1

$(TARGET): $(JOBS)
	$(CX) -o $(TARGET) $(JOBS)

main.o: main.cpp shape.hpp
	$(CX) $(CFLAGS) -c main.cpp

complex.o: shape.cpp shape.hpp
	$(CX) $(CFLAGS) -c shape.cpp

.PHONY: clean

clean:
	rm -f $(TARGET) $(JOBS)
