#ifndef SWAGGER_TYPES_LolGameflowLoginSessionStates_HPP
#define SWAGGER_TYPES_LolGameflowLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowLoginSessionStates& v) {
    switch(v) {
      case LolGameflowLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolGameflowLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolGameflowLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolGameflowLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolGameflowLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGameflowLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolGameflowLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGameflowLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowLoginSessionStates_HPP
