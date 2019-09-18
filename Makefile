objects = BBSTree.o main.o

a.out:$(objects)
	g++ -o a.out $(objects) -std=c++11
BBSTree.o:BBSTree.h
	g++ -c BBSTree.cpp -std=c++11
main.o:BBSTree.h
	g++ -c main.cpp -std=c++11
.PHONY: clean
clean:
	-rm *.o a.out