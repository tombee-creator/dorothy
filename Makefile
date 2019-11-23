test:
	g++ -c --std=c++17 src/code.cpp -o obj/code.o
	g++ -c --std=c++17 src/cpu.cpp -o obj/cpu.o
	g++ -c --std=c++17 src/lexer.cpp -o obj/lexer.o
	g++ -c --std=c++17 src/ast.cpp -o obj/ast.o
	g++ -c --std=c++17 src/parser.cpp -o obj/parser.o
	g++ --std=c++17 unittest/code.cpp obj/*.o
	./a.out
	g++ --std=c++17 unittest/lexer.cpp obj/*.o
	./a.out
	g++ --std=c++17 unittest/parser.cpp obj/*.o
	./a.out
	g++ --std=c++17 unittest/ast.cpp obj/*.o
	./a.out
	g++ --std=c++17 -o cpu unittest/cpu.cpp obj/*.o
	g++ --std=c++17 -o compiler unittest/compile.cpp obj/*.o
