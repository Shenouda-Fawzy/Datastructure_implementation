# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: Source.out

Source.out: Source.o
	 g++ -o Source.out Source.o

LinkedQSourceueue.o: Source.cpp
	 g++ -c Source.cpp
     
clean:
	 rm Source.o Source.out

# You can use this one for simplicty
# build:
#	g++ -o TestQueue.out TestQueue.cpp
