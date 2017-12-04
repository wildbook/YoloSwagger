#ifndef SWAGGER_TYPES_LolMatchHistoryLoginSessionStates_HPP
#define SWAGGER_TYPES_LolMatchHistoryLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchHistoryLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryLoginSessionStates& v) {
    switch(v) {
      case LolMatchHistoryLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolMatchHistoryLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolMatchHistoryLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolMatchHistoryLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolMatchHistoryLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolMatchHistoryLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolMatchHistoryLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolMatchHistoryLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryLoginSessionStates_HPP
