CC = g++
CCFLAGS = -std=c++17

HH = $(shell find . -name '*.h')
CPP = $(shell find . -name '*.cc')


LDFLAGS = `pkg-config --cflags --libs opencv4`

a.out: $(HH)
	$(CC) $(CCFLAGS) $(CPP) $(LDFLAGS)

clean:
	rm -rf a.out core *.o