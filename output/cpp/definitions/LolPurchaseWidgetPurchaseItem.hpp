#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseItem_t {
    LolPurchaseWidgetItemPrice_t purchaseCurrencyInfo;
    LolPurchaseWidgetItemKey_t itemKey;
    int32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseItem_t& v) {
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo;
    j["itemKey"] = v.itemKey;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseItem_t& v) {
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice_t>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    v.quantity = j.at("quantity").get<int32_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetPurchaseItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
