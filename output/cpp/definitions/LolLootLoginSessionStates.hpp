#ifndef SWAGGER_TYPES_LolLootLoginSessionStates_HPP
#define SWAGGER_TYPES_LolLootLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLootLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSessionStates& v) {
    switch(v) {
      case LolLootLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLootLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLootLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolLootLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolLootLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLootLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLootLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolLootLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLootLoginSessionStates_HPP
