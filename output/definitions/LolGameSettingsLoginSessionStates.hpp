#ifndef SWAGGER_TYPES_LolGameSettingsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolGameSettingsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameSettingsLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsLoginSessionStates& v) {
    switch(v) {
      case LolGameSettingsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolGameSettingsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolGameSettingsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolGameSettingsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolGameSettingsLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGameSettingsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolGameSettingsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGameSettingsLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameSettingsLoginSessionStates_HPP
