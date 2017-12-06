#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashClashVisibility.hpp"
#include "LolClashClashState.hpp"
namespace leagueapi {
  struct LolClashClashConfig_t {
    std::string DarkModeEntitlement;
    LolClashClashState_t EnabledState;
    std::string IconConfig;
    bool IsPlaymodeRestrictionEnabled;
    bool UseIndividualEntitlement;
    LolClashClashVisibility_t Visibility;
  };

  inline void to_json(nlohmann::json& j, const LolClashClashConfig_t& v) {
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
    j["EnabledState"] = v.EnabledState;
    j["IconConfig"] = v.IconConfig;
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
    j["Visibility"] = v.Visibility;
  }

  inline void from_json(const nlohmann::json& j, LolClashClashConfig_t& v) {
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>();
    v.EnabledState = j.at("EnabledState").get<LolClashClashState_t>();
    v.IconConfig = j.at("IconConfig").get<std::string>();
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>();
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>();
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility_t>();
  }
}
