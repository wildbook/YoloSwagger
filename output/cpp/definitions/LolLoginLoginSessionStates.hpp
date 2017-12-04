#ifndef SWAGGER_TYPES_LolLoginLoginSessionStates_HPP
#define SWAGGER_TYPES_LolLoginLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLoginLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSessionStates& v) {
    switch(v) {
      case LolLoginLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLoginLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLoginLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolLoginLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolLoginLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLoginLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLoginLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolLoginLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLoginLoginSessionStates_HPP
