#ifndef SWAGGER_TYPES_LolClashClashState_HPP
#define SWAGGER_TYPES_LolClashClashState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashClashState {
    // 
    DarkDisabled = 0,
    // 
    Disabled = 2,
    // 
    Enabled = 3,
    // 
    DarkEnabled = 1,
  };

  inline void to_json(nlohmann::json& j, const LolClashClashState& v) {
    switch(v) {
      case LolClashClashState::DarkDisabled:
        j = "DarkDisabled";
      break;
      case LolClashClashState::Disabled:
        j = "Disabled";
      break;
      case LolClashClashState::Enabled:
        j = "Enabled";
      break;
      case LolClashClashState::DarkEnabled:
        j = "DarkEnabled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashClashState& v) {
    const auto& s = j.get<std::string>();
    if(s == "DarkDisabled"){
      v = LolClashClashState::DarkDisabled;
      return;
    }
    if(s == "Disabled"){
      v = LolClashClashState::Disabled;
      return;
    }
    if(s == "Enabled"){
      v = LolClashClashState::Enabled;
      return;
    }
    if(s == "DarkEnabled"){
      v = LolClashClashState::DarkEnabled;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashClashState_HPP
