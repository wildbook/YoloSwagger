#ifndef SWAGGER_TYPES_LolInventoryLoginSessionStates_HPP
#define SWAGGER_TYPES_LolInventoryLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolInventoryLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolInventoryLoginSessionStates& v) {
    switch(v) {
      case LolInventoryLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolInventoryLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolInventoryLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolInventoryLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolInventoryLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolInventoryLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolInventoryLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolInventoryLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolInventoryLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolInventoryLoginSessionStates_HPP
