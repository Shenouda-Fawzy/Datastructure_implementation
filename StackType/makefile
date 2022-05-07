# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: Stack.out

Stack.out: Stack.o
	 g++ -o Stack.out TestStack.o

Stack.o: TestStack.cpp
	 g++ -c TestStack.cpp
     
clean:
	 rm TestStack.o Stack.out


