CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=-std=c++11 -g
SOURCES=task1.cpp main1.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=main1

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f *.o a.out