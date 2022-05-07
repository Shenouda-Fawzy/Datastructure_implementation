# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: Stack.out

Stack.out: Stack.o
	 g++ -o Stack.out Source.o

Stack.o: Source.cpp
	 g++ -c Source.cpp
     
clean:
	 rm Source.o Stack.out


