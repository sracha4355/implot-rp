CC=g++
FLAGS= -Wall ${INCLUDE}
SOURCES:= $(wildcard *.cpp)
OBJECTS:= $(SOURCES:.cpp=.o)
INCLUDE:= -I../imgui/
libimplot: ${OBJECTS}
	ar rcs libimplot.a ${OBJECTS}
        
%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

clean:
	rm *.o
	rm libimplot.a

                             
