#include "BadDoorState.h"
namespace door{

  BadDoorState(const std::string &_problem)
    :problem(_problem)
    {
    }

    std::string BadDoorState::getProblem() const {
      return problem;
    }

    void BadDoorState::setProblem(const std::string &_problem) {
      problem = _problem;
    }
}
