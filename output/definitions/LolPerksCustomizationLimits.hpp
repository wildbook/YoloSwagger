#ifndef SWAGGER_TYPES_LolPerksCustomizationLimits_HPP
#define SWAGGER_TYPES_LolPerksCustomizationLimits_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPerksCustomizationLimits {
    // 
    CanSelectKeystones = 2,
    // 
    CanSelectPages = 1,
    // 
    CanSelectPrimaries = 4,
    // 
    CanSelectSplash = 8,
    // 
    CanUseAdvancedStyles = 16,
    // 
    Locked = 0,
  };

  void to_json(nlohmann::json& j, const LolPerksCustomizationLimits& v) {
    switch(v) {
      case LolPerksCustomizationLimits::CanSelectKeystones:
        j = "CanSelectKeystones";
      break;
      case LolPerksCustomizationLimits::CanSelectPages:
        j = "CanSelectPages";
      break;
      case LolPerksCustomizationLimits::CanSelectPrimaries:
        j = "CanSelectPrimaries";
      break;
      case LolPerksCustomizationLimits::CanSelectSplash:
        j = "CanSelectSplash";
      break;
      case LolPerksCustomizationLimits::CanUseAdvancedStyles:
        j = "CanUseAdvancedStyles";
      break;
      case LolPerksCustomizationLimits::Locked:
        j = "Locked";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolPerksCustomizationLimits& v) {
    const auto s& = j.get<std::string>();
    if(s == "CanSelectKeystones"){
      v = LolPerksCustomizationLimits::CanSelectKeystones;
      return;
    }
    if(s == "CanSelectPages"){
      v = LolPerksCustomizationLimits::CanSelectPages;
      return;
    }
    if(s == "CanSelectPrimaries"){
      v = LolPerksCustomizationLimits::CanSelectPrimaries;
      return;
    }
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
  }

}
#endif // SWAGGER_TYPES_LolPerksCustomizationLimits_HPP
