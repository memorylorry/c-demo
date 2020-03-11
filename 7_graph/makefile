# 图的遍历
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


# 最小生成树


# 最短路径
SmallestPath_Dijkstra : SmallestPath_Dijkstra.o MGraph.o SqQueue.o
	gcc SmallestPath_Dijkstra.o MGraph.o SqQueue.o -o SmallestPath_Dijkstra && make clean && ./SmallestPath_Dijkstra && rm -rf SmallestPath_Dijkstra

SmallestPath_Dijkstra.o : SmallestPath_Dijkstra.cpp
	gcc -c SmallestPath_Dijkstra.cpp


# 拓扑排序


# 关键路径


# Common
MGraph.o :  MGraph.h MGraph.cpp
	gcc -c  MGraph.h MGraph.cpp

SqQueue.o : ../2_stack_quene/SqQueue.h ../2_stack_quene/SqQueue.cpp
	gcc -c  ../2_stack_quene/SqQueue.h ../2_stack_quene/SqQueue.cpp

clean :
	rm -rf *.o *.gch
