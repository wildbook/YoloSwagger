#ifndef SWAGGER_TYPES_LolLoginLoginSessionStates_HPP
#define SWAGGER_TYPES_LolLoginLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLoginLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolLoginLoginSessionStates& v) {
    switch(v) {
      case LolLoginLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolLoginLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLoginLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLoginLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLoginLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolLoginLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLoginLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLoginLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLoginLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLoginLoginSessionStates_HPP
