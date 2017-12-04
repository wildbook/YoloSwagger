#ifndef SWAGGER_TYPES_LolClashClashConfig_HPP
#define SWAGGER_TYPES_LolClashClashConfig_HPP
#include <json.hpp>
#include "LolClashClashVisibility.hpp"
#include "LolClashClashState.hpp"
namespace leagueapi {
  // 
  struct LolClashClashConfig {
    // 
    std::string DarkModeEntitlement;
    // 
    LolClashClashState EnabledState;
    // 
    LolClashClashVisibility Visibility;
    // 
    bool UseIndividualEntitlement;
    // 
    bool IsPlaymodeRestrictionEnabled;
    // 
    std::string IconConfig;
  };

  inline void to_json(nlohmann::json& j, const LolClashClashConfig& v) {
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
    j["EnabledState"] = v.EnabledState;
    j["Visibility"] = v.Visibility;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["IconConfig"] = v.IconConfig;
  }

  inline void from_json(const nlohmann::json& j, LolClashClashConfig& v) {
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>;
    v.EnabledState = j.at("EnabledState").get<LolClashClashState>;
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility>;
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>;
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>;
    v.IconConfig = j.at("IconConfig").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashClashConfig_HPP
