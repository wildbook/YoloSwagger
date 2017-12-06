#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseWidgetConfig_t {
    bool enabled;
    bool purchaseDisclaimerEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseWidgetConfig_t& v) {
    j["enabled"] = v.enabled;
    j["purchaseDisclaimerEnabled"] = v.purchaseDisclaimerEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseWidgetConfig_t& v) {
    v.enabled = j.at("enabled").get<bool>();
    v.purchaseDisclaimerEnabled = j.at("purchaseDisclaimerEnabled").get<bool>();
  }
}
