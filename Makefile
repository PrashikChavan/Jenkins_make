SRC = test.c display.c
Target = Result
all:
	gcc $(SRC) -o $(Target)


clean:
	rm -f $(Target)
