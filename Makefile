EXENAME = main

CXX = clang++
CXXFLAGS = -std=c++11 -g -O0 -Wall -Wextra

all : $(EXENAME)

$(EXENAME): main.cpp long_int.o
	$(CXX) $(CXXFLAGS) main.cpp long_int.o -o $(EXENAME)

pet.o: long_int.h long_int.cpp
	$(CXX) $(CXXFLAGS) -c long_int.cpp

.PHONY: clean
clean:
	rm -f $(EXENAME)
