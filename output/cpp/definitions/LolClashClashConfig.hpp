#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashClashVisibility.hpp"
#include "LolClashClashState.hpp"
namespace leagueapi {
  struct LolClashClashConfig_t {
    std::string DarkModeEntitlement;
    LolClashClashState_t EnabledState;
    LolClashClashVisibility_t Visibility;
    bool UseIndividualEntitlement;
    bool IsPlaymodeRestrictionEnabled;
    std::string IconConfig;
  };

  inline void to_json(nlohmann::json& j, const LolClashClashConfig_t& v) {
    j["DarkModeEntitlement"] = v.DarkModeEntitlement;
    j["EnabledState"] = v.EnabledState;
    j["Visibility"] = v.Visibility;
    j["UseIndividualEntitlement"] = v.UseIndividualEntitlement;
    j["IsPlaymodeRestrictionEnabled"] = v.IsPlaymodeRestrictionEnabled;
    j["IconConfig"] = v.IconConfig;
  }

  inline void from_json(const nlohmann::json& j, LolClashClashConfig_t& v) {
    v.DarkModeEntitlement = j.at("DarkModeEntitlement").get<std::string>();
    v.EnabledState = j.at("EnabledState").get<LolClashClashState_t>();
    v.Visibility = j.at("Visibility").get<LolClashClashVisibility_t>();
    v.UseIndividualEntitlement = j.at("UseIndividualEntitlement").get<bool>();
    v.IsPlaymodeRestrictionEnabled = j.at("IsPlaymodeRestrictionEnabled").get<bool>();
    v.IconConfig = j.at("IconConfig").get<std::string>();
  }
  inline std::string to_string(const LolClashClashConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
