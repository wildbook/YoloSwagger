#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashClashState.hpp"
#include "LolClashClashVisibility.hpp"
namespace leagueapi {
  struct LolClashClashConfig_t {
    LolClashClashState_t EnabledState;
    LolClashClashVisibility_t Visibility;
    bool IsPlaymodeRestrictionEnabled;
    bool UseIndividualEntitlement;
    std::string DarkModeEntitlement;
    std::string IconConfig;
  };

  inline void to_json(nlohmann::json& j, const LolClashClashConfig_t& v) {
    j["EnabledState"] = v.EnabledState;
    j["Visibility"] = v.Visibility;
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
    j["IconConfig"] = v.IconConfig;
  }

  inline void from_json(const nlohmann::json& j, LolClashClashConfig_t& v) {
    v.EnabledState = j.at("EnabledState").get<LolClashClashState_t>();
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility_t>();
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>();
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>();
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>();
    v.IconConfig = j.at("IconConfig").get<std::string>();
  }
  inline std::string to_string(const LolClashClashConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
