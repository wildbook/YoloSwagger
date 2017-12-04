#ifndef SWAGGER_TYPES_LolGameSettingsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolGameSettingsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameSettingsLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsLoginSessionStates& v) {
    switch(v) {
      case LolGameSettingsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolGameSettingsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolGameSettingsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolGameSettingsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolGameSettingsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGameSettingsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGameSettingsLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolGameSettingsLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameSettingsLoginSessionStates_HPP
