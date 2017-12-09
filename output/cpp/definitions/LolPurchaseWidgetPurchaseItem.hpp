#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetPurchaseItem_t {
    int32_t quantity;
    LolPurchaseWidgetItemKey_t itemKey;
    LolPurchaseWidgetItemPrice_t purchaseCurrencyInfo;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseItem_t& v) {
    j["quantity"] = v.quantity;
    j["itemKey"] = v.itemKey;
    j["purchaseCurrencyInfo"] = v.purchaseCurrencyInfo;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseItem_t& v) {
    v.quantity = j.at("quantity").get<int32_t>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    v.purchaseCurrencyInfo = j.at("purchaseCurrencyInfo").get<LolPurchaseWidgetItemPrice_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetPurchaseItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
