#ifndef SWAGGER_TYPES_LolMatchHistoryLoginSessionStates_HPP
#define SWAGGER_TYPES_LolMatchHistoryLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchHistoryLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryLoginSessionStates& v) {
    switch(v) {
      case LolMatchHistoryLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolMatchHistoryLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolMatchHistoryLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolMatchHistoryLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolMatchHistoryLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolMatchHistoryLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolMatchHistoryLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolMatchHistoryLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryLoginSessionStates_HPP
