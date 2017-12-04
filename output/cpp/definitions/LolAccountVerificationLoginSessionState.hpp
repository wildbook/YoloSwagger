#ifndef SWAGGER_TYPES_LolAccountVerificationLoginSessionState_HPP
#define SWAGGER_TYPES_LolAccountVerificationLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolAccountVerificationLoginSessionState {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationLoginSessionState& v) {
    switch(v) {
      case LolAccountVerificationLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolAccountVerificationLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolAccountVerificationLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolAccountVerificationLoginSessionState::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolAccountVerificationLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolAccountVerificationLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolAccountVerificationLoginSessionState::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolAccountVerificationLoginSessionState::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationLoginSessionState_HPP
