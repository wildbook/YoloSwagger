#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseWidgetConfig_t {
    bool purchaseDisclaimerEnabled;
    bool enabled;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseWidgetConfig_t& v) {
    j["purchaseDisclaimerEnabled"] = v.purchaseDisclaimerEnabled;
    j["enabled"] = v.enabled;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseWidgetConfig_t& v) {
    v.purchaseDisclaimerEnabled = j.at("purchaseDisclaimerEnabled").get<bool>();
    v.enabled = j.at("enabled").get<bool>();
  }
  inline std::string to_string(const LolPurchaseWidgetPurchaseWidgetConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
