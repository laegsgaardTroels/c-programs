all: $(patsubst %.c,%.o,$(wildcard *.c))

clean:
	rm *.o

%.o: %.c
	cc -o $@ $<
