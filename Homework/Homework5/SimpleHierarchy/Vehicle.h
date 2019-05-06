#include <iomanip>
#include <string>

using namespace vehicle;

class Vehicle {
private: string Name;
private: string Color;
private: int TopSpeed;
private: bool InUse = false;
public: Vehicle(string _Name, string _Color, int _TopSpeed);
public: void setName(string _Name);
public: void setColor(string _Color);
public: void setTopSpeed(int _TopSpeed);
public: string getName() const;
public: string getcolor() const;
public: string getTopSpeed() const;
public: bool IsInUse() const;
public: void ToggleVehicleUse();
};
