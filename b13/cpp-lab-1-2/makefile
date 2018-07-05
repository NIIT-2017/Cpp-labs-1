CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=-std=c++11 -g
SOURCES=task2.cpp main2.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main2

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o a.out