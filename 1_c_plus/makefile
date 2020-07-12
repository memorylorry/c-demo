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


# TemplateDemo
TemplateDemo : TemplateDemo.o 
	g++ TemplateDemo.o -o TemplateDemo && make clean && ./TemplateDemo && rm -rf TemplateDemo
	
TemplateDemo.o : TemplateDemo.cpp
	g++ -c TemplateDemo.cpp


# Common
clean :
	rm -rf *.o *.gch
