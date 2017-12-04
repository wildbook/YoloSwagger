#ifndef SWAGGER_TYPES_RecofrienderLoginSessionStates_HPP
#define SWAGGER_TYPES_RecofrienderLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class RecofrienderLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const RecofrienderLoginSessionStates& v) {
    switch(v) {
      case RecofrienderLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case RecofrienderLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case RecofrienderLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case RecofrienderLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, RecofrienderLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = RecofrienderLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = RecofrienderLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = RecofrienderLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = RecofrienderLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RecofrienderLoginSessionStates_HPP
