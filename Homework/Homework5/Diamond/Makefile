CXXFLAGS=-std=c++14 -Iinclude -fPIC

all : bin/vehicle

tmp/Color.o : src/Color.cpp include/Color.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Vehicle.o : src/Vehicle.cpp include/Vehicle.h include/Color.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Bike.o: src/Bike.cpp include/Vehicle.h include/Bike.h include/Color.h include/BadVehicleState.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/BadVehicleState.o : src/BadVehicleState.cpp include/BadVehicleState.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/Carriage.o: src/Carriage.cpp include/Vehicle.h include/Carriage.h include/Color.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/PedalCar.o: src/PedalCar.cpp include/Vehicle.h include/Bike.h include/Carriage.h include/Color.h include/PedalCar.h include/BadVehicleState.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libvehicle.so : tmp/Carriage.o tmp/Bike.o tmp/Vehicle.o tmp/Color.o tmp/PedalCar.o tmp/BadVehicleState.o
				$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/main.cpp include/Vehicle.h include/Bike.h include/Carriage.h include/Color.h include/PedalCar.h include/BadVehicleState.h
				$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/vehicle : tmp/main.o lib/libvehicle.so
				$(CXX) $(CXXFLAGS) -o $@ $^
