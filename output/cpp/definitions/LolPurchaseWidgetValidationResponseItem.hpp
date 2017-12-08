#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetSale.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationResponseItem_t {
    LolPurchaseWidgetItemKey_t itemKey;
    std::optional<LolPurchaseWidgetSale_t> sale;
    std::vector<LolPurchaseWidgetItemPrice_t> prices;
    int32_t quantity;
    std::optional<std::string> description;
    std::optional<std::string> name;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponseItem_t& v) {
    j["itemKey"] = v.itemKey;
    if(v.sale)
      j["sale"] = *v.sale;
    j["prices"] = v.prices;
    j["quantity"] = v.quantity;
    if(v.description)
      j["description"] = *v.description;
    if(v.name)
      j["name"] = *v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponseItem_t& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<LolPurchaseWidgetSale_t>();
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice_t>>();
    v.quantity = j.at("quantity").get<int32_t>();
    if(auto it = j.find("description"); it != j.end() && !it->is_null())
      v.description = it->get<std::string>();
    if(auto it = j.find("name"); it != j.end() && !it->is_null())
      v.name = it->get<std::string>();
  }
  inline std::string to_string(const LolPurchaseWidgetValidationResponseItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
