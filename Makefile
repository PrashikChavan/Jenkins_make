SRC = test.c display.c

all:
	gcc $(SRC) -O Result


clean:
	rm -f Result
