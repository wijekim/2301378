CX = g++
CFLAGS = -g -Wall
JOBS = main.o point.o
TARGET = point


$(TARGET): $(JOBS)
	$(CX) -o $(TARGET) $(JOBS)

main.o: main.cpp point.hpp
	$(CX) $(CFLAGS) -c main.cpp

complex.o: point.cpp point.hpp
	$(CX) $(CFLAGS) -c point.cpp

.PHONY: clean

clean:
	rm -f $(TARGET) $(JOBS)
