#pragma once

#include <string>

namespace door {
  class BadDoorState {
    private: std::string problem;
    public: BadDoorState(const std::string &_problem);
    public: std::string getProblem() const;
    public: void setProblem(const std::string $_problem);
  };
}
