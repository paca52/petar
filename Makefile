CC=gcc
FLAGS=-O1 -Wall -std=c99 -Wno-missing-braces -Iinclude/ -Llib/ -lraylib -lopengl32 -lgdi32 -lwinmm -static-libstdc++ -static-libgcc -static -mwindows


all: petar
	.\petar

petar: main.c
	$(CC) $^ -o $@ $(FLAGS)
