# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: LinkedQueue.out

LinkedQueue.out: LinkedQueue.o
	 g++ -o LinkedQueue.out Source.o

LinkedQueue.o: Source.cpp
	 g++ -c Source.cpp
     
clean:
	 rm Source.o LinkedQueue.out
