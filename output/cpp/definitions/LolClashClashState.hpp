#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashClashState_t {
    DarkDisabled_E = 0,
    DarkEnabled_E = 1,
    Disabled_E = 2,
    Enabled_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolClashClashState_t& v) {
    switch(v) {
      case LolClashClashState_t::DarkDisabled_E:
        j = "DarkDisabled";
      break;
      case LolClashClashState_t::DarkEnabled_E:
        j = "DarkEnabled";
      break;
      case LolClashClashState_t::Disabled_E:
        j = "Disabled";
      break;
      case LolClashClashState_t::Enabled_E:
        j = "Enabled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashClashState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "DarkDisabled"){
      v = LolClashClashState_t::DarkDisabled_E;
      return;
    }
    if(s == "DarkEnabled"){
      v = LolClashClashState_t::DarkEnabled_E;
      return;
    }
    if(s == "Disabled"){
      v = LolClashClashState_t::Disabled_E;
      return;
    }
    if(s == "Enabled"){
      v = LolClashClashState_t::Enabled_E;
      return;
    }
  }
}
