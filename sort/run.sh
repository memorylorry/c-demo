#!/bin/bash
if [[ "$1" = "clean" ]];then
    rm -rf *.o
elif [[ "$1" = "" ]];then
    echo "使用方法："
    echo "./run.sh <文件名>    编译并执行文件"
    echo "./run.sh clean      清理文件"
else
    gcc "$1" ../common/util.cpp ../common/util.h -o "runner.o" && ./runner.o
fi
