CC = clang
OUT = wuziqi.exe

all: bin/main.o bin/check.o
	$(CC) -g -c -Wall $^ -o bin/$(OUT)

bin/main.o: src/main.c
	$(CC) -g -c -Wall $^ -o $@

bin/check.o: src/check.c
	$(CC) -g -c -Wall $^ -o $@