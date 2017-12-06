#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPerksCustomizationLimits_t {
    CanSelectKeystones_E = 2,
    CanSelectPages_E = 1,
    CanSelectPrimaries_E = 4,
    CanSelectSplash_E = 8,
    CanUseAdvancedStyles_E = 16,
    Locked_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolPerksCustomizationLimits_t& v) {
    switch(v) {
      case LolPerksCustomizationLimits_t::CanSelectKeystones_E:
        j = "CanSelectKeystones";
      break;
      case LolPerksCustomizationLimits_t::CanSelectPages_E:
        j = "CanSelectPages";
      break;
      case LolPerksCustomizationLimits_t::CanSelectPrimaries_E:
        j = "CanSelectPrimaries";
      break;
      case LolPerksCustomizationLimits_t::CanSelectSplash_E:
        j = "CanSelectSplash";
      break;
      case LolPerksCustomizationLimits_t::CanUseAdvancedStyles_E:
        j = "CanUseAdvancedStyles";
      break;
      case LolPerksCustomizationLimits_t::Locked_E:
        j = "Locked";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPerksCustomizationLimits_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "CanSelectKeystones"){
      v = LolPerksCustomizationLimits_t::CanSelectKeystones_E;
      return;
    }
    if(s == "CanSelectPages"){
      v = LolPerksCustomizationLimits_t::CanSelectPages_E;
      return;
    }
    if(s == "CanSelectPrimaries"){
      v = LolPerksCustomizationLimits_t::CanSelectPrimaries_E;
      return;
    }
    if(s == "CanSelectSplash"){
      v = LolPerksCustomizationLimits_t::CanSelectSplash_E;
      return;
    }
    if(s == "CanUseAdvancedStyles"){
      v = LolPerksCustomizationLimits_t::CanUseAdvancedStyles_E;
      return;
    }
    if(s == "Locked"){
      v = LolPerksCustomizationLimits_t::Locked_E;
      return;
    }
  }
}
