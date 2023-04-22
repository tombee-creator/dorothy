compile:
	g++ -w --std=c++14 src/entry/main.cpp src/dorothy/*.cpp

test:
	g++ -w --std=c++14 tests/*.cpp src/dorothy/*.cpp -pthread -lgtest_main -lgtest
