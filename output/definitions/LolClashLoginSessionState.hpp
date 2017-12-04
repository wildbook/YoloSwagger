#ifndef SWAGGER_TYPES_LolClashLoginSessionState_HPP
#define SWAGGER_TYPES_LolClashLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashLoginSessionState {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashLoginSessionState& v) {
    switch(v) {
      case LolClashLoginSessionState::ERROR:
        j = "ERROR";
      break;
      case LolClashLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolClashLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolClashLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolClashLoginSessionState::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolClashLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolClashLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolClashLoginSessionState::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashLoginSessionState_HPP
