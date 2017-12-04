#ifndef SWAGGER_TYPES_LolPerksLoginSessionState_HPP
#define SWAGGER_TYPES_LolPerksLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPerksLoginSessionState {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolPerksLoginSessionState& v) {
    switch(v) {
      case LolPerksLoginSessionState::ERROR:
        j = "ERROR";
      break;
      case LolPerksLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolPerksLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolPerksLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPerksLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolPerksLoginSessionState::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPerksLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolPerksLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPerksLoginSessionState::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPerksLoginSessionState_HPP
