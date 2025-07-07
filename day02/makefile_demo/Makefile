CXX = g++
CXXFLAGS = -c

#app:
#	g++ main.cpp bubble_sort.cpp -o main.exe

main.exe: main.o bubble_sort.o
	$(CXX) $^ -o $@
main.o:
	$(CXX) main.cpp  $(CXXFLAGS) -o $@
bubble_sort.o:
	$(CXX) bubble_sort.cpp  $(CXXFLAGS) -o $@

.PHONY:clean
clean:
	$(RM) *.o
