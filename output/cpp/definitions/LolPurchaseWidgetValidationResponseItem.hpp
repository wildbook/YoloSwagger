#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemPrice.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetSale.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationResponseItem_t {
    std::optional<LolPurchaseWidgetSale_t> sale;
    LolPurchaseWidgetItemKey_t itemKey;
    std::optional<std::string> name;
    std::vector<LolPurchaseWidgetItemPrice_t> prices;
    std::optional<std::string> description;
    int32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponseItem_t& v) {
    if(v.sale)
      j["sale"] = *v.sale;
    j["itemKey"] = v.itemKey;
    if(v.name)
      j["name"] = *v.name;
    j["prices"] = v.prices;
    if(v.description)
      j["description"] = *v.description;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponseItem_t& v) {
    if(auto it = j.find("sale"); it != j.end() !it->is_null())
      v.sale = it->get<LolPurchaseWidgetSale_t>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    if(auto it = j.find("name"); it != j.end() !it->is_null())
      v.name = it->get<std::string>();
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice_t>>();
    if(auto it = j.find("description"); it != j.end() !it->is_null())
      v.description = it->get<std::string>();
    v.quantity = j.at("quantity").get<int32_t>();
  }
}
