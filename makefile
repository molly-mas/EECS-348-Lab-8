CC = gcc

all: NFL TempConv

NFL: NFL.c
	$(CC) NFL.c -o NFL

TempConv: TempConv.c
	$(CC) TempConv.c -o TempConv

clean:
	rm -f NFL TempConv