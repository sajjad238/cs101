objects = basic.o iteration.o
CC = g++ -g

# make try itself to resolve the pre-requisit objects in working directory
main: main.cpp $(objects)
	$(CC) $^ -o $@

clean:
	rm main $(objects)
