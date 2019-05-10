#include "../include/BadVehicleState.h"

namespace vehicle {

  BadVehicleState::BadVehicleState(const std::string &_problem)
    : problem(_problem)
    {
    }

    std::string BadVehicleState::getProblem() const{
      return problem;
    }

    void BadVehicleState::setProblem(const std::string &_problem) {
      problem = _problem;
    }
}
