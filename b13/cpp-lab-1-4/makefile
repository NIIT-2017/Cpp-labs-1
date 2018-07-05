CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=-std=c++11 -g
SOURCES=task4.cpp main4.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main4

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o a.out