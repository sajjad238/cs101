CC = g++ -g

objects = factorial function-call student-marks

default: $(objects)

%: %.cpp
	$(CC) $^ -o $@

clean:
	rm $(objects)
