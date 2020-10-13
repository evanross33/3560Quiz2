all: build doc doczip

clean:
	rm *.o *.out
	rm -d -r html latex

build: myexe.out

myexe.out: college.o collegemain.o course.o
	g++ college.o collegemain.o course.o -o myexe.out

college.o: college.cc
	g++ -c college.cc

collegemain.o: collegemain.cc
	g++ -c collegemain.cc

course.o: course.cc
	g++ -c course.cc

doc:
	doxygen -g doxygenconfig
	doxygen doxygenconfig

doczip:
	tar -cvf quiz2.tar html
