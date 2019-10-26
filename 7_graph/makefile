# BFS_Traverse
BFS_Traverse : BFS_Traverse.o MGraph.o SqQueue.o
	gcc BFS_Traverse.o MGraph.o SqQueue.o -o BFS_Traverse && make clean && ./BFS_Traverse && rm -rf BFS_Traverse


BFS_Traverse.o : BFS_Traverse.cpp
	gcc -c BFS_Traverse.cpp

# DFS_Traverse
DFS_Traverse : DFS_Traverse.o MGraph.o SqQueue.o
	gcc DFS_Traverse.o MGraph.o SqQueue.o -o DFS_Traverse && make clean && ./DFS_Traverse && rm -rf DFS_Traverse


DFS_Traverse.o : DFS_Traverse.cpp
	gcc -c DFS_Traverse.cpp

# Common
MGraph.o :  MGraph.h MGraph.cpp
	gcc -c  MGraph.h MGraph.cpp

SqQueue.o : ../2_stack_quene/SqQueue.h ../2_stack_quene/SqQueue.cpp
	gcc -c  ../2_stack_quene/SqQueue.h ../2_stack_quene/SqQueue.cpp

clean :
	rm -rf *.o *.gch
