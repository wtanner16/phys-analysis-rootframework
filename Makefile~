CFLAGS = $(shell root-config --cflags)
LIBS   = $(shell root-config --libs)
GLIBS  = $(shell root-config --glibs)
all: main
main: main.cpp astro.cpp root.cpp
	g++ $(CFLAGS) $(GLIBS) main.cpp astro.cpp root.cpp -o main
clean:
	rm -f main
