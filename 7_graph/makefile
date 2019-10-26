BFS_Traverse : BFS_Traverse.o
	gcc BFS_Traverse.cpp -o BFS_Traverse && make clean && ./BFS_Traverse && rm -rf BFS_Traverse


BFS_Traverse.o : BFS_Traverse.cpp graph.h
	gcc -c BFS_Traverse.cpp graph.h

clean :
	rm -rf *.o *.gch
