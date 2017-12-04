#ifndef SWAGGER_TYPES_LolStoreLoginSessionStates_HPP
#define SWAGGER_TYPES_LolStoreLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolStoreLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolStoreLoginSessionStates& v) {
    switch(v) {
      case LolStoreLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolStoreLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolStoreLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolStoreLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolStoreLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolStoreLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolStoreLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolStoreLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolStoreLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolStoreLoginSessionStates_HPP
