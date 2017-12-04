#ifndef SWAGGER_TYPES_LolGameflowLoginSessionStates_HPP
#define SWAGGER_TYPES_LolGameflowLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowLoginSessionStates& v) {
    switch(v) {
      case LolGameflowLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolGameflowLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolGameflowLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolGameflowLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolGameflowLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGameflowLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGameflowLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolGameflowLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowLoginSessionStates_HPP
