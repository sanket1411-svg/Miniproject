

all: ttt

ttt:main.o tictactoe.o
	gcc -Wall -o ttt main.o tictactoe.o

main.o:main.c
	gcc -c -Wall main.c

tictactoe.o:tictactoe.c
	gcc -c -Wall tictactoe.c