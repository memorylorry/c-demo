# 排序二叉树的编译
BinarySortTree : LiStack.o BinarySortTree.o
	gcc LiStack.o BinarySortTree.o -o BinarySortTree && \
		make clean && \
		./BinarySortTree && \
		rm BinarySortTree

BinarySortTree.o : BinarySortTree.h BinarySortTree.cpp
	gcc -c BinarySortTree.h BinarySortTree.cpp

LiStack.o : ../2_stack_quene/LiStack.cpp ../2_stack_quene/LiStack.h 
	gcc -c ../2_stack_quene/LiStack.cpp

clean : 
	rm *.o *.gch