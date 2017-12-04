#ifndef SWAGGER_TYPES_LolEndOfGameLoginSessionStates_HPP
#define SWAGGER_TYPES_LolEndOfGameLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolEndOfGameLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameLoginSessionStates& v) {
    switch(v) {
      case LolEndOfGameLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolEndOfGameLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolEndOfGameLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolEndOfGameLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolEndOfGameLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolEndOfGameLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolEndOfGameLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolEndOfGameLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameLoginSessionStates_HPP
