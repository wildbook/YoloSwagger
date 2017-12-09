#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetSale.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationResponseItem_t {
    std::optional<LolPurchaseWidgetSale_t> sale;
    int32_t quantity;
    std::vector<LolPurchaseWidgetItemPrice_t> prices;
    std::optional<std::string> description;
    LolPurchaseWidgetItemKey_t itemKey;
    std::optional<std::string> name;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponseItem_t& v) {
    if(v.sale)
      j["sale"] = *v.sale;
    j["quantity"] = v.quantity;
    j["prices"] = v.prices;
    if(v.description)
      j["description"] = *v.description;
    j["itemKey"] = v.itemKey;
    if(v.name)
      j["name"] = *v.name;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponseItem_t& v) {
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<LolPurchaseWidgetSale_t>();
    v.quantity = j.at("quantity").get<int32_t>();
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice_t>>();
    if(auto it = j.find("description"); it != j.end() && !it->is_null())
      v.description = it->get<std::string>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    if(auto it = j.find("name"); it != j.end() && !it->is_null())
      v.name = it->get<std::string>();
  }
  inline std::string to_string(const LolPurchaseWidgetValidationResponseItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
