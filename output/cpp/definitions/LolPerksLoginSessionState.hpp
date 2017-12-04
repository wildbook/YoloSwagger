#ifndef SWAGGER_TYPES_LolPerksLoginSessionState_HPP
#define SWAGGER_TYPES_LolPerksLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPerksLoginSessionState {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolPerksLoginSessionState& v) {
    switch(v) {
      case LolPerksLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolPerksLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolPerksLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolPerksLoginSessionState::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPerksLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolPerksLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPerksLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPerksLoginSessionState::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolPerksLoginSessionState::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPerksLoginSessionState_HPP
