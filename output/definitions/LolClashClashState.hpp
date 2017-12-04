#ifndef SWAGGER_TYPES_LolClashClashState_HPP
#define SWAGGER_TYPES_LolClashClashState_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolClashClashState {
'    // 
    DarkDisabled = 0,
    // 
    DarkEnabled = 1,
    // 
    Disabled = 2,
    // 
    Enabled = 3,
  };

  void to_json(nlohmann::json& j, const LolClashClashState& v) {
    switch(v) {
      case LolClashClashState::DarkDisabled:
        j = "DarkDisabled";
      break;
      case LolClashClashState::DarkEnabled:
        j = "DarkEnabled";
      break;
      case LolClashClashState::Disabled:
        j = "Disabled";
      break;
      case LolClashClashState::Enabled:
        j = "Enabled";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolClashClashState& v) {
    const auto s& = j.get<std::string>();
    if(s == "DarkDisabled"){
      v = LolClashClashState::DarkDisabled;
      return;
    }
    if(s == "DarkEnabled"){
      v = LolClashClashState::DarkEnabled;
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
  }

}
#endif // SWAGGER_TYPES_LolClashClashState_HPP
