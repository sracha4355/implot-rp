CC=g++
SOURCES:= $(wildcard *.cpp)
OBJECTS:= $(SOURCES:.cpp=.o)
libimgui: ${OBJECTS}
	ar rcs libimgui.a ${OBJECTS}
	
%.o: %.cpp
	${CC} -c $< -o $@

clean:
	rm *.o
	rm libimgui.a
