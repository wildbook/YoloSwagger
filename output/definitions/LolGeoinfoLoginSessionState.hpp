#ifndef SWAGGER_TYPES_LolGeoinfoLoginSessionState_HPP
#define SWAGGER_TYPES_LolGeoinfoLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGeoinfoLoginSessionState {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoLoginSessionState& v) {
    switch(v) {
      case LolGeoinfoLoginSessionState::ERROR:
        j = "ERROR";
      break;
      case LolGeoinfoLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolGeoinfoLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolGeoinfoLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolGeoinfoLoginSessionState::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGeoinfoLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolGeoinfoLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGeoinfoLoginSessionState::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGeoinfoLoginSessionState_HPP
