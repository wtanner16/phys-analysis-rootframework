CFLAGS = $(shell root-config --cflags)
GSLFLAGS = $(shell gsl-config --cflags)
LIBS   = $(shell root-config --libs)
GLIBS  = $(shell root-config --glibs)
GSLLIBS = $(shell gsl-config --libs)

all: main
main: main.cpp astro.cpp root.cpp
	g++ $(CFLAGS) $(GSLFLAGS) $(GLIBS) $(GSLLIBS) main.cpp astro.cpp root.cpp -o main
clean:
	rm -f main
