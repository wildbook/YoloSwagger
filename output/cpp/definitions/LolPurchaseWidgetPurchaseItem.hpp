#ifndef SWAGGER_TYPES_LolPurchaseWidgetPurchaseItem_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetPurchaseItem_HPP
#include <json.hpp>
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetPurchaseItem {
    // 
    LolPurchaseWidgetItemPrice purchaseCurrencyInfo;
    // 
    LolPurchaseWidgetItemKey itemKey;
    // 
    int32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseItem& v) {
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo;
    j["itemKey"] = v.itemKey;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseItem& v) {
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice>;
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>;
    v.quantity = j.at("quantity").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetPurchaseItem_HPP
