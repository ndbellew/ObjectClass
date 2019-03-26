CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/Marker.o : src/Door.cpp include/Door.h include/BadDoorState.h include/Material.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/BadMarkerState.o : src/BadDoorState.cpp include/BadDoorState.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libmarker.so : tmp/Marker.o tmp/BadMarkerState.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/main.cpp include/Marker.h include/BadMarkerState.h include/Color.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/marker : tmp/main.o lib/libmarker.so
	$(CXX) $(CXXFLAGS) -o $@ $^
