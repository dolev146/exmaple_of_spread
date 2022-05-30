all:main clean

main:
	g++ -o main main.cpp ; ./main 

clean: 
	rm -f main