# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: UnsortedLinkedList.out

UnsortedLinkedList.out: UnsortedLinkedList.o
	 g++ -o UnsortedLinkedList.out Source.o

UnsortedLinkedList.o: Source.cpp
	 g++ -c Source.cpp
     
clean:
	 rm Source.o UnsortedLinkedList.out


