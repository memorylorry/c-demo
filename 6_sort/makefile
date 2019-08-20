BubbleSort : BubbleSort.o util.o
	gcc BubbleSort.o util.o -o BubbleSort && \
		make clean && \
		./BubbleSort && \
		rm BubbleSort

BubbleSort.o : BubbleSort.cpp
	gcc -c BubbleSort.cpp


InsertSort : InsertSort.o util.o
	gcc InsertSort.o util.o -o InsertSort && \
		make clean && \
		./InsertSort && \
		rm InsertSort

InsertSort.o : InsertSort.cpp
	gcc -c InsertSort.cpp


MergeSort : MergeSort.o util.o
	gcc MergeSort.o util.o -o MergeSort && \
		make clean && \
		./MergeSort && \
		rm MergeSort

MergeSort.o : MergeSort.cpp
	gcc -c MergeSort.cpp


QuickSort : QuickSort.o util.o
	gcc QuickSort.o util.o -o QuickSort && \
		make clean && \
		./QuickSort && \
		rm QuickSort

QuickSort.o : QuickSort.cpp
	gcc -c QuickSort.cpp


SelectSort : SelectSort.o util.o
	gcc SelectSort.o util.o -o SelectSort && \
		make clean && \
		./SelectSort && \
		rm SelectSort

SelectSort.o : SelectSort.cpp
	gcc -c SelectSort.cpp

# 公用模块
util.o : ../common/util.cpp ../common/util.h
	gcc -c ../common/util.cpp

clean : 
	rm *.o