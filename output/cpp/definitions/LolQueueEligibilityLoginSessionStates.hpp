#ifndef SWAGGER_TYPES_LolQueueEligibilityLoginSessionStates_HPP
#define SWAGGER_TYPES_LolQueueEligibilityLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolQueueEligibilityLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityLoginSessionStates& v) {
    switch(v) {
      case LolQueueEligibilityLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolQueueEligibilityLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolQueueEligibilityLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolQueueEligibilityLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolQueueEligibilityLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolQueueEligibilityLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolQueueEligibilityLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolQueueEligibilityLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolQueueEligibilityLoginSessionStates_HPP