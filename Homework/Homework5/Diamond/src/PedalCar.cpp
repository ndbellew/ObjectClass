#include <iomanip>
#include "../include/PedalCar.h"

namespace vehicle{
  PedalCar::PedalCar(std::string _Name, Color _Color, int _HorsePower, int _WheelNum, int _FrontWheels, int _BackWheels, bool _KickstandUp, bool _Brake)
    : Bike(_Name, _Color, _KickstandUp, _Brake), Carriage(_Name, _Color, _HorsePower,_WheelNum), FrontWheels(_FrontWheels), BackWheels(_BackWheels){
      std::cout<<"Now creating that yeet Pedal Car\n";
    }

    int PedalCar::getFrontWheels() const{
      return FrontWheels;
    }

    int PedalCar::getBackWheels() const{
      return BackWheels;
    }

    void PedalCar::setFrontWheels(int _FrontWheels){
        FrontWheels=_FrontWheels;
    }

    void PedalCar::setBackWheels(int _BackWheels){
        BackWheels=_BackWheels;
    }

    void PedalCar::Drive() const{
      int totalwheels = getFrontWheels()+getBackWheels();
      if (totalwheels>getWheelNum()) {throw Too_Many_Wheels;}
      else if (totalwheels<getWheelNum()) {throw Not_Enough_Wheels;}
      else{
      std::cout<<"Now driving your sweet swan pedal car!\n";}

    }

    std::shared_ptr<Vehicle> PedalCar::clone() const{
      PedalCar *copy = new PedalCar(getName(), getColor(), getHorsePower(), getWheelNum(), getFrontWheels(), getBackWheels(), isKickstandUp(), IsBrakeInUse());
      return std::shared_ptr<Vehicle>(copy);
    }

    PedalCar::~PedalCar(){
      std::cout<<"Now Deconstructing Swag PedalCar\n";
    }

    const BadVehicleState PedalCar::Not_Enough_Wheels("There are not enough wheels on this vehicle, please update the total wheels first");
    const BadVehicleState PedalCar::Too_Many_Wheels("There are too many wheels on this pedalCar, please update total wheels first.");
}
