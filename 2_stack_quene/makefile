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

clean : 
	rm *.o *.gch