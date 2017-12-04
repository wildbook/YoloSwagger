#ifndef SWAGGER_TYPES_LolPftLoginSessionStates_HPP
#define SWAGGER_TYPES_LolPftLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolPftLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolPftLoginSessionStates& v) {
    switch(v) {
      case LolPftLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolPftLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolPftLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolPftLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolPftLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolPftLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPftLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolPftLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPftLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPftLoginSessionStates_HPP
