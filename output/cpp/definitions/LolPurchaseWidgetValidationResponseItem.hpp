#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetSale.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationResponseItem_t {
    std::optional<std::string_t> description;
    std::optional<LolPurchaseWidgetSale_t> sale;
    std::optional<std::string_t> name;
    LolPurchaseWidgetItemKey_t itemKey;
    std::vector<LolPurchaseWidgetItemPrice_t> prices;
    int32_t_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponseItem_t& v) {
    if(v.description)
      j["description"] = *v.description;
    if(v.sale)
      j["sale"] = *v.sale;
    if(v.name)
      j["name"] = *v.name;
    j["itemKey"] = v.itemKey;
    j["prices"] = v.prices;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponseItem_t& v) {
    if(auto it = j.find("description"); it != j.end() && !it->is_null())
      v.description = it->get<std::string_t>();
    if(auto it = j.find("sale"); it != j.end() && !it->is_null())
      v.sale = it->get<LolPurchaseWidgetSale_t>();
    if(auto it = j.find("name"); it != j.end() && !it->is_null())
      v.name = it->get<std::string_t>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice_t>>();
    v.quantity = j.at("quantity").get<int32_t_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetValidationResponseItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
