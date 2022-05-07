# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: HashTable.out

HashTable.out: HashTable.o
	 g++ -o HashTable.out HashTable.o

Hashtable.o: HashTable.cpp
	 g++ -c HashTable.cpp
     
clean:
	 rm HashTable.o HashTable.out
