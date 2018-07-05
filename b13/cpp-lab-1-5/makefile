CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=-std=c++11 -g
SOURCES=task5.cpp main5.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main5

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o a.out