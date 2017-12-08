#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemPrice.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseItem_t {
    LolPurchaseWidgetItemKey_t itemKey;
    int32_t quantity;
    LolPurchaseWidgetItemPrice_t purchaseCurrencyInfo;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseItem_t& v) {
    j["itemKey"] = v.itemKey;
    j["quantity"] = v.quantity;
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseItem_t& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    v.quantity = j.at("quantity").get<int32_t>();
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetPurchaseItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
