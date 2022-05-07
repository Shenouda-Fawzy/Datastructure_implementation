# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: LinkedStack.out

LinkedStack.out: LinkedStack.o
	 g++ -o LinkedStack.out Source.o

LinkedStack.o: Source.cpp
	 g++ -c Source.cpp
     
clean:
	 rm Source.o LinkedStack.out


