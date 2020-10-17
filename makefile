default: catalog.cpp driver.cpp catalog.h
	g++ driver.cpp catalog.cpp -o pogwarts

clean:
	rm -f *.o project1
