#include <iomanip>
#include "../include/PedalCar.h"

namespace vehicle{
  PedalCar::PedalCar(std::string _Name, Color _Color, int _HorsePower, int _WheelNum, int FrontWheels, int _BackWheels, bool _KickstandUp=true, bool _Brake=false);
    : Bike(_Name, _Color, _KickstandUp, _Brake), Carriage(_Name, _Color, _HorsePower,_WheelNum), FrontWheels(_FrontWheels), BackWheels(_Backwheels){
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

    void PedalCar::setBackWheels(int _Backwheels){
      BackWheels=_Backwheels;
    }

    void PedalCar::Drive() const{
      std::cout<<"Now driving your sweet swan pedal car!\n";

    }

    PedalCar::~PedalCar(){
      std::cout<<"Now Deconstructing Swag PedalCar\n";
    }
}
