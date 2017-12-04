#ifndef SWAGGER_TYPES_LolGeoinfoLoginSessionState_HPP
#define SWAGGER_TYPES_LolGeoinfoLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGeoinfoLoginSessionState {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoLoginSessionState& v) {
    switch(v) {
      case LolGeoinfoLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolGeoinfoLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolGeoinfoLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolGeoinfoLoginSessionState::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolGeoinfoLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGeoinfoLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGeoinfoLoginSessionState::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolGeoinfoLoginSessionState::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoLoginSessionState_HPP
