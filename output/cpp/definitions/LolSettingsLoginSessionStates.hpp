#ifndef SWAGGER_TYPES_LolSettingsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolSettingsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolSettingsLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSessionStates& v) {
    switch(v) {
      case LolSettingsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolSettingsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolSettingsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolSettingsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolSettingsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolSettingsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolSettingsLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolSettingsLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolSettingsLoginSessionStates_HPP
