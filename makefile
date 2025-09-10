all: a.exe

a.exe:
	g++ -std=c++17  src/app.cpp test/test.cpp -o a.exe

test: a.exe
	./a.exe -s -d -t