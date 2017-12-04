#ifndef SWAGGER_TYPES_LolPerksCustomizationLimits_HPP
#define SWAGGER_TYPES_LolPerksCustomizationLimits_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPerksCustomizationLimits {
    // 
    CanSelectSplash = 8,
    // 
    CanUseAdvancedStyles = 16,
    // 
    Locked = 0,
    // 
    CanSelectPrimaries = 4,
    // 
    CanSelectPages = 1,
    // 
    CanSelectKeystones = 2,
  };

  inline void to_json(nlohmann::json& j, const LolPerksCustomizationLimits& v) {
    switch(v) {
      case LolPerksCustomizationLimits::CanSelectSplash:
        j = "CanSelectSplash";
      break;
      case LolPerksCustomizationLimits::CanUseAdvancedStyles:
        j = "CanUseAdvancedStyles";
      break;
      case LolPerksCustomizationLimits::Locked:
        j = "Locked";
      break;
      case LolPerksCustomizationLimits::CanSelectPrimaries:
        j = "CanSelectPrimaries";
      break;
      case LolPerksCustomizationLimits::CanSelectPages:
        j = "CanSelectPages";
      break;
      case LolPerksCustomizationLimits::CanSelectKeystones:
        j = "CanSelectKeystones";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPerksCustomizationLimits& v) {
    const auto& s = j.get<std::string>();
    if(s == "CanSelectSplash"){
      v = LolPerksCustomizationLimits::CanSelectSplash;
      return;
    }
    if(s == "CanUseAdvancedStyles"){
      v = LolPerksCustomizationLimits::CanUseAdvancedStyles;
      return;
    }
    if(s == "Locked"){
      v = LolPerksCustomizationLimits::Locked;
      return;
    }
    if(s == "CanSelectPrimaries"){
      v = LolPerksCustomizationLimits::CanSelectPrimaries;
      return;
    }
    if(s == "CanSelectPages"){
      v = LolPerksCustomizationLimits::CanSelectPages;
      return;
    }
    if(s == "CanSelectKeystones"){
      v = LolPerksCustomizationLimits::CanSelectKeystones;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPerksCustomizationLimits_HPP
