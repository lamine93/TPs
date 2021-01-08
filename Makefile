compiler =g++ -O2 -g
cflags = -std=c++11

headers = $(wildcard *.hpp)
sources = $(wildcard *.cpp)
objects = $(sources:.cpp=.o)

executables: point

%.o: %.c $(headers)
	$(compiler) -c -o $@ $< $(cflags)

point : $(objects)
	$(compiler) -o $@ $^ $(cflags)

clean:
	rm -f point *.o
