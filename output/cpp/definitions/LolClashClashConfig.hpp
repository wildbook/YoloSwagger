#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashClashState.hpp"
#include "LolClashClashVisibility.hpp"
namespace leagueapi {
  struct LolClashClashConfig_t {
    LolClashClashVisibility_t Visibility;
    std::string IconConfig;
    std::string DarkModeEntitlement;
    LolClashClashState_t EnabledState;
    bool IsPlaymodeRestrictionEnabled;
    bool UseIndividualEntitlement;
  };

  inline void to_json(nlohmann::json& j, const LolClashClashConfig_t& v) {
    j["Visibility"] = v.Visibility;
    j["IconConfig"] = v.IconConfig;
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
    j["EnabledState"] = v.EnabledState;
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
  }

  inline void from_json(const nlohmann::json& j, LolClashClashConfig_t& v) {
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility_t>();
    v.IconConfig = j.at("IconConfig").get<std::string>();
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>();
    v.EnabledState = j.at("EnabledState").get<LolClashClashState_t>();
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>();
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>();
  }
  inline std::string to_string(const LolClashClashConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
