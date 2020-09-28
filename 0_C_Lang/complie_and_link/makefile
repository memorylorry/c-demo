##
# 使用静态和动态链接库，生成可执行文件没有特别大的区别；只是动态的仍然依赖库文件，文件较小
# 1. 动态链接形成的程序，一般有个找动态库的流程，通常会在可执行文件当前目录和$LD_LIBRARY_PATH变量中寻找！用户自定义的目录，请自行添加到变量中。
# 2. 配置 /etc/ld.so.conf; 需使用 ldconfig 命令进行更新
# 3. 静态链接库，把库的内容全合并到了可执行文件中，体积大。
##
main : main.o libfun.so
	gcc main.o -o main -L=`pwd` -lfun
	@rm *.gch *.o
	@echo 'Complie Done!'

main_static : main.o libfun.a
	gcc main.o -o main_static -L=`pwd` -lfun
	@rm *.gch *.o
	@echo 'Complie Done!'


# 编译成目标文件
fun.o : fun.cpp
	gcc -c fun.h fun.cpp


##
# 生成静态文件 *.a
##
libfun.a : fun.o
	ar rcs libfun.a fun.o


##
# 生成动态态文件 *.so
##
libfun.so : fun.o
	gcc --shared -fPIC fun.o -o libfun.so


# 编译成目标文件
main.o : main.cpp
	gcc -c main.cpp


clean :
	@rm *.a *.so main main_static