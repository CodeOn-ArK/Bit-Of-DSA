CC=gcc

all: 
	run

run: pointed_array
	./pointed_array

pointed_array: pointed_array.o display_matrix.o
	$(CC) pointed_array.o display_matrix.o -o pointed_array

pointed_array.o: pointed_array.c
	$(CC) -c pointed_array.c

display_matrix.o: display_matrix.c
	$(CC) -c display_matrix.c

clean: 
	rm *.o pointed_array
