#ifndef SWAGGER_TYPES_LolGameQueuesLoginSessionStates_HPP
#define SWAGGER_TYPES_LolGameQueuesLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameQueuesLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesLoginSessionStates& v) {
    switch(v) {
      case LolGameQueuesLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolGameQueuesLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolGameQueuesLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolGameQueuesLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolGameQueuesLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGameQueuesLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGameQueuesLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolGameQueuesLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameQueuesLoginSessionStates_HPP
