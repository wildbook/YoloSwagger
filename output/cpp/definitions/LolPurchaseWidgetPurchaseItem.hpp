#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemPrice.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseItem_t {
    LolPurchaseWidgetItemKey_t itemKey;
    LolPurchaseWidgetItemPrice_t purchaseCurrencyInfo;
    int32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseItem_t& v) {
    j["itemKey"] = v.itemKey;
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseItem_t& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice_t>();
    v.quantity = j.at("quantity").get<int32_t>();
  }
}
