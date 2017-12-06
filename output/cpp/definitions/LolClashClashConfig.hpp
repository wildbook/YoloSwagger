#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashClashVisibility.hpp"
#include "LolClashClashState.hpp"
namespace leagueapi {
  struct LolClashClashConfig_t {
    std::string DarkModeEntitlement;
    LolClashClashVisibility_t Visibility;
    std::string IconConfig;
    bool IsPlaymodeRestrictionEnabled;
    LolClashClashState_t EnabledState;
    bool UseIndividualEntitlement;
  };

  inline void to_json(nlohmann::json& j, const LolClashClashConfig_t& v) {
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
    j["Visibility"] = v.Visibility;
    j["IconConfig"] = v.IconConfig;
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["EnabledState"] = v.EnabledState;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
  }

  inline void from_json(const nlohmann::json& j, LolClashClashConfig_t& v) {
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>();
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility_t>();
    v.IconConfig = j.at("IconConfig").get<std::string>();
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>();
    v.EnabledState = j.at("EnabledState").get<LolClashClashState_t>();
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>();
  }
}
