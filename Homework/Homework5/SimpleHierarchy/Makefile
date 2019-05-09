CXXFLAGS=-std=c++14 -Iinclude -fPIC -pthread

all : bin/vehicle

tmp/Color.o : src/Color.cpp include/Color.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Vehicle.o : src/Vehicle.cpp include/Vehicle.h include/Color.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Bike.o: src/Bike.cpp include/Vehicle.h include/Bike.h include/Color.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Car.o: src/Car.cpp include/Vehicle.h include/Bike.h include/Car.h include/Color.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libvehicle.so : tmp/Car.o tmp/Bike.o tmp/Vehicle.o tmp/Color.o
				$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/main.cpp include/Vehicle.h include/Bike.h include/Car.h include/Color.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/pusher : lib/libvehicle.so
				$(CXX) $(CXXFLAGS) -c -o $@ $^ -lpthread
