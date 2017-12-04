#ifndef SWAGGER_TYPES_LolClashClashConfig_HPP
#define SWAGGER_TYPES_LolClashClashConfig_HPP
#include <json.hpp>
#include "LolClashClashState.hpp"
#include "LolClashClashVisibility.hpp"
namespace leagueapi {
  // 
  struct LolClashClashConfig {
    // 
    std::string DarkModeEntitlement;
    // 
    LolClashClashState EnabledState;
    // 
    std::string IconConfig;
    // 
    bool IsPlaymodeRestrictionEnabled;
    // 
    bool UseIndividualEntitlement;
    // 
    LolClashClashVisibility Visibility;
  };

  inline void to_json(nlohmann::json& j, const LolClashClashConfig& v) {
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
    j["EnabledState"] = v.EnabledState;
    j["IconConfig"] = v.IconConfig;
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
    j["Visibility"] = v.Visibility;
  }

  inline void from_json(const nlohmann::json& j, LolClashClashConfig& v) {
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>;
    v.EnabledState = j.at("EnabledState").get<LolClashClashState>;
    v.IconConfig = j.at("IconConfig").get<std::string>;
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>;
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>;
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility>;
  }

}
#endif // SWAGGER_TYPES_LolClashClashConfig_HPP
