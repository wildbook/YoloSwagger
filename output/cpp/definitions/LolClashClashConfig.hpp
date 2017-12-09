#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashClashVisibility.hpp"
#include "LolClashClashState.hpp"
namespace leagueapi {
  struct LolClashClashConfig_t {
    std::string DarkModeEntitlement;
    bool UseIndividualEntitlement;
    LolClashClashState_t EnabledState;
    std::string IconConfig;
    bool IsPlaymodeRestrictionEnabled;
    LolClashClashVisibility_t Visibility;
  };

  inline void to_json(nlohmann::json& j, const LolClashClashConfig_t& v) {
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
    j["EnabledState"] = v.EnabledState;
    j["IconConfig"] = v.IconConfig;
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["Visibility"] = v.Visibility;
  }

  inline void from_json(const nlohmann::json& j, LolClashClashConfig_t& v) {
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>();
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>();
    v.EnabledState = j.at("EnabledState").get<LolClashClashState_t>();
    v.IconConfig = j.at("IconConfig").get<std::string>();
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>();
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility_t>();
  }
  inline std::string to_string(const LolClashClashConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
