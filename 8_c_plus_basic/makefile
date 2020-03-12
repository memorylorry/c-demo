# C++
# HelloWorld
HelloWorld : HelloWorld.o 
	g++ HelloWorld.o -o HelloWorld && make clean && ./HelloWorld && rm -rf HelloWorld


HelloWorld.o : HelloWorld.cpp
	g++ -c HelloWorld.cpp


# StringDemo
StringDemo : StringDemo.o 
	g++ StringDemo.o -o StringDemo && make clean && ./StringDemo && rm -rf StringDemo


StringDemo.o : StringDemo.cpp
	g++ -c StringDemo.cpp


# StringDemo
StringOperation : StringOperation.o 
	g++ StringOperation.o -o StringOperation && make clean && ./StringOperation && rm -rf StringOperation
	
StringOperation.o : StringOperation.cpp
	g++ -c StringOperation.cpp
	

# VectorDemo
VectorDemo : VectorDemo.o 
	g++ VectorDemo.o -o VectorDemo && make clean && ./VectorDemo && rm -rf VectorDemo
	
VectorDemo.o : VectorDemo.cpp
	g++ -c VectorDemo.cpp


# StackWithVector
StackWithVector : StackWithVector.o 
	g++ StackWithVector.o -o StackWithVector && make clean && ./StackWithVector && rm -rf StackWithVector
	
StackWithVector.o : StackWithVector.cpp
	g++ -c StackWithVector.cpp


# TemplateDemo
TemplateDemo : TemplateDemo.o 
	g++ TemplateDemo.o -o TemplateDemo && make clean && ./TemplateDemo && rm -rf TemplateDemo
	
TemplateDemo.o : TemplateDemo.cpp
	g++ -c TemplateDemo.cpp


# MapTest
MapTest : MapTest.o 
	g++ MapTest.o -o MapTest && make clean && ./MapTest && rm -rf MapTest
	
MapTest.o : MapTest.cpp
	g++ -c MapTest.cpp

# Common
clean :
	rm -rf *.o *.gch
