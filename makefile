tic-tac-toe:fonction.c fonction_main.c
	gcc -o tic-tac-toe fonction.c fonction_main.c -g -O0 -lm -lpthread -fopenmp 
run:tic-tac-toe
	./tic-tac-toe 
run_valgrind:tic-tac-toe
	valgrind  --tool=memcheck --leak-check=yes --leak-resolution=low --show-reachable=yes  ./tic-tac-toe
clean:
	rm  tic-tac-toe
profile:
	gcc -Wall -pg fonction_tic-tac-toe.c fonction_main.c -lm -lpthread -o tic-tac-toe