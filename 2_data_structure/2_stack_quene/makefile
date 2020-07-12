# SqStack的编译
SqStackUse : SqStack.o SqStackUse.o
	gcc SqStack.o SqStackUse.o -o SqStackUse && \
		make clean && \
		./SqStackUse && \
		rm SqStackUse

SqStack.so : SqStack.o # 编译出动态链接库
	gcc SqStack.o -fPIC -shared -o ../lib/libSqStack.so &&\
		make clean && rm -rf *.gch

SqStack.o : SqStack.h SqStack.cpp
	gcc -c SqStack.h SqStack.cpp

SqStackUse.o : SqStackUse.cpp
	gcc -c SqStackUse.cpp


# LiStack的编译
LiStackUse : LiStack.o LiStackUse.o
	gcc LiStack.o LiStackUse.o -o LiStackUse && \
		make clean && \
		./LiStackUse && \
		rm LiStackUse

LiStack.so : LiStack.o # 编译出动态链接库
	gcc LiStack.o -fPIC -shared -o ../lib/libLiStack.so &&\
		make clean && rm -rf *.gch

LiStack.o : LiStack.h LiStack.cpp
	gcc -c LiStack.h LiStack.cpp

LiStackUse.o : LiStackUse.cpp
	gcc -c LiStackUse.cpp


# SqQueue的编译
SqQueueUse : SqQueue.o SqQueueUse.o
	gcc SqQueue.o SqQueueUse.o -o SqQueueUse && \
		make clean && \
		./SqQueueUse && \
		rm SqQueueUse

# SqQueue.so : SqStack.o # 编译出动态链接库
# 	gcc SqStack.o -fPIC -shared -o ../lib/libSqStack.so &&\
# 		make clean && rm -rf *.gch

SqQueue.o : SqQueue.h SqQueue.cpp
	gcc -c SqQueue.h SqQueue.cpp

SqQueueUse.o : SqQueueUse.cpp
	gcc -c SqQueueUse.cpp


# LiQueue的编译
LiQueueUse : LiQueue.o LiQueueUse.o
	gcc LiQueue.o LiQueueUse.o -o LiQueueUse && \
		make clean && \
		./LiQueueUse && \
		rm LiQueueUse

# LiQueue.so : SqStack.o # 编译出动态链接库
# 	gcc SqStack.o -fPIC -shared -o ../lib/libSqStack.so &&\
# 		make clean && rm -rf *.gch

LiQueue.o : LiQueue.h LiQueue.cpp
	gcc -c LiQueue.h LiQueue.cpp

LiQueueUse.o : LiQueueUse.cpp
	gcc -c LiQueueUse.cpp


# BraceMatch的编译
BraceMatch : BraceMatch.o LiStack.o
	gcc BraceMatch.o LiStack.o -o BraceMatch && \
		make clean && \
		./BraceMatch && \
		rm BraceMatch

BraceMatch.o : BraceMatch.cpp
	gcc -c BraceMatch.cpp


# StackImplementRecrusive的编译
StackImplementRecrusive : StackImplementRecrusive.o
	gcc StackImplementRecrusive.o -o StackImplementRecrusive && \
		rm *.o && \
		./StackImplementRecrusive && \
		rm StackImplementRecrusive

StackImplementRecrusive.o : StackImplementRecrusive.cpp
	gcc -c StackImplementRecrusive.cpp

clean : 
	rm *.o *.gch