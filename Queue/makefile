# For more info check https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1
all: TestQueue.out

TestQueue.out: TestQueue.o
	 g++ -o TestQueue.out TestQueue.o

TestQueue.o: TestQueue.cpp
	 g++ -c TestQueue.cpp
     
clean:
	 rm TestQueue.o TestQueue.out

# You can use this one for simplicty
# build:
#	g++ -o TestQueue.out TestQueue.cpp