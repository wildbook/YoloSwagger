#ifndef SWAGGER_TYPES_LolPftLoginSessionStates_HPP
#define SWAGGER_TYPES_LolPftLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPftLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolPftLoginSessionStates& v) {
    switch(v) {
      case LolPftLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolPftLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolPftLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolPftLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPftLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolPftLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPftLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPftLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolPftLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPftLoginSessionStates_HPP
