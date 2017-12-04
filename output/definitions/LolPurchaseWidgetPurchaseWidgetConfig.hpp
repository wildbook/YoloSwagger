#ifndef SWAGGER_TYPES_LolPurchaseWidgetPurchaseWidgetConfig_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetPurchaseWidgetConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPurchaseWidgetPurchaseWidgetConfig {
    // 
    bool enabled;
    // 
    bool purchaseDisclaimerEnabled;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseWidgetConfig& v) {
    j["enabled"] = v.enabled;
    j["purchaseDisclaimerEnabled"] = v.purchaseDisclaimerEnabled;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseWidgetConfig& v) {
    v.enabled = j.at("enabled").get<bool>;
    v.purchaseDisclaimerEnabled = j.at("purchaseDisclaimerEnabled").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetPurchaseWidgetConfig_HPP
