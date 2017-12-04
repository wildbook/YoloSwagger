#ifndef SWAGGER_TYPES_RecofrienderLoginSessionStates_HPP
#define SWAGGER_TYPES_RecofrienderLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class RecofrienderLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLoginSessionStates& v) {
    switch(v) {
      case RecofrienderLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case RecofrienderLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case RecofrienderLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case RecofrienderLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = RecofrienderLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = RecofrienderLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = RecofrienderLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = RecofrienderLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_RecofrienderLoginSessionStates_HPP
