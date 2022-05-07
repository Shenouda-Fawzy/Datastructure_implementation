# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: SortedLinkedList.out

SortedLinkedList.out: SortedLinkedList.o
	 g++ -o SortedLinkedList.out Source.o

SortedLinkedList.o: Source.cpp
	 g++ -c Source.cpp
     
clean:
	 rm Source.o SortedLinkedList.out
