#ifndef SWAGGER_TYPES_LolEndOfGameLoginSessionStates_HPP
#define SWAGGER_TYPES_LolEndOfGameLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolEndOfGameLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolEndOfGameLoginSessionStates& v) {
    switch(v) {
      case LolEndOfGameLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolEndOfGameLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolEndOfGameLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolEndOfGameLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolEndOfGameLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolEndOfGameLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolEndOfGameLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolEndOfGameLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolEndOfGameLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLoginSessionStates_HPP
