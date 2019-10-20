RandowAccess : RandowAccess.o 
	gcc RandowAccess.o -o RandowAccess && \
		make clean && \
		./RandowAccess && \
		rm RandowAccess

RandowAccess.o : RandowAccess.cpp
	gcc -c RandowAccess.cpp


# 公用模块
util.o : ../common/util.cpp ../common/util.h
	gcc -c ../common/util.cpp

clean : 
	rm *.o