CXX = g++
CXXFLAGS = 

main: main.o bankTools.o
	$(CXX) -o main main.o bankTools.o

main.o: main.cpp bankTools.cpp bankTools.hpp
	$(CXX) -c main.cpp

bankTools.o: bankTools.hpp
