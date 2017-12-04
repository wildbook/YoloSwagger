#ifndef SWAGGER_TYPES_LolPurchaseWidgetPurchaseItem_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetPurchaseItem_HPP
#include <json.hpp>
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetPurchaseItem {
    // 
    LolPurchaseWidgetItemKey itemKey;
    // 
    LolPurchaseWidgetItemPrice purchaseCurrencyInfo;
    // 
    int32_t quantity;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseItem& v) {
    j["itemKey"] = v.itemKey;
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo;
    j["quantity"] = v.quantity;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseItem& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>;
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice>;
    v.quantity = j.at("quantity").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetPurchaseItem_HPP
