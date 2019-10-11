all: main.o helper.o
	cc -o main helper.o main.o
main.o: main.c helper.h
	cc -c main.c
helper.o: helper.c helper.h
	cc -c helper.c
.PHONY: clean run
clean:
	rm main *.o
run:
	./main
