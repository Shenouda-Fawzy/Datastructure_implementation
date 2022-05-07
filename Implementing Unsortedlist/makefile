# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: List.out

List.out: List.o
	 g++ -o List.out Source.o

List.o: USList.h SortedList.h  # we can remove the *.h files without affecting the build process
	 g++ -c Source.cpp
     
clean:
	 rm Source.o List.out


