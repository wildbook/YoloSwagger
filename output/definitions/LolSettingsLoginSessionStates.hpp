#ifndef SWAGGER_TYPES_LolSettingsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolSettingsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolSettingsLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSessionStates& v) {
    switch(v) {
      case LolSettingsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolSettingsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolSettingsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolSettingsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolSettingsLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolSettingsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolSettingsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolSettingsLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolSettingsLoginSessionStates_HPP
