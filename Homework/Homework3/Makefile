CXXFLAGS=-std=c++14 -Iinclude -fPIC

all : bin/door

tmp/Door.o : src/Door.cpp include/Door.h include/BadDoorState.h include/Material.h
		$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Material.o : src/Material.cpp include/Material.h
		$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/BadDoorState.o : src/BadDoorState.cpp include/BadDoorState.h
		$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libdoor.so : tmp/Door.o tmp/BadDoorState.o
		$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/main.cpp include/Door.h include/BadDoorState.h include/Material.h
		$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/door : tmp/main.o lib/libdoor.so
		$(CXX) $(CXXFLAGS) -o $@ $^
