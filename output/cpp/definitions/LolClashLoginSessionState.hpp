#ifndef SWAGGER_TYPES_LolClashLoginSessionState_HPP
#define SWAGGER_TYPES_LolClashLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashLoginSessionState {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolClashLoginSessionState& v) {
    switch(v) {
      case LolClashLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolClashLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolClashLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolClashLoginSessionState::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolClashLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolClashLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolClashLoginSessionState::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolClashLoginSessionState::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashLoginSessionState_HPP
