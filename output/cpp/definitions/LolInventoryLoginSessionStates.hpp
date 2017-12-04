#ifndef SWAGGER_TYPES_LolInventoryLoginSessionStates_HPP
#define SWAGGER_TYPES_LolInventoryLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolInventoryLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolInventoryLoginSessionStates& v) {
    switch(v) {
      case LolInventoryLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolInventoryLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolInventoryLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolInventoryLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolInventoryLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolInventoryLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolInventoryLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolInventoryLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolInventoryLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolInventoryLoginSessionStates_HPP
