#pragma once

#include <string>

namespace vehicle{
  class BadVehicleState {
    private: std::string problem;
    public: BadVehicleState(const std::string &_problem);
    public: std::string getProblem() const;
    public: void setProblem(const std::string &_problem);
  };
}
