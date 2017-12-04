#ifndef SWAGGER_TYPES_LolAccountVerificationLoginSessionState_HPP
#define SWAGGER_TYPES_LolAccountVerificationLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolAccountVerificationLoginSessionState {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolAccountVerificationLoginSessionState& v) {
    switch(v) {
      case LolAccountVerificationLoginSessionState::ERROR:
        j = "ERROR";
      break;
      case LolAccountVerificationLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolAccountVerificationLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolAccountVerificationLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolAccountVerificationLoginSessionState& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolAccountVerificationLoginSessionState::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolAccountVerificationLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolAccountVerificationLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolAccountVerificationLoginSessionState::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationLoginSessionState_HPP
