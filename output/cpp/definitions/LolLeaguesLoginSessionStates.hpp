#ifndef SWAGGER_TYPES_LolLeaguesLoginSessionStates_HPP
#define SWAGGER_TYPES_LolLeaguesLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLeaguesLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLoginSessionStates& v) {
    switch(v) {
      case LolLeaguesLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLeaguesLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLeaguesLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolLeaguesLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolLeaguesLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLeaguesLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLeaguesLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolLeaguesLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLeaguesLoginSessionStates_HPP
