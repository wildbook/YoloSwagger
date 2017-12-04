#ifndef SWAGGER_TYPES_LolPurchaseWidgetValidationResponseItem_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetValidationResponseItem_HPP
#include <json.hpp>
#include "LolPurchaseWidgetSale.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetValidationResponseItem {
    // 
    std::string description;
    // 
    LolPurchaseWidgetSale sale;
    // 
    std::string name;
    // 
    LolPurchaseWidgetItemKey itemKey;
    // 
    std::vector<LolPurchaseWidgetItemPrice> prices;
    // 
    int32_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponseItem& v) {
    j["description"] = v.description;
    j["sale"] = v.sale;
    j["name"] = v.name;
    j["itemKey"] = v.itemKey;
    j["prices"] = v.prices;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponseItem& v) {
    v.description = j.at("description").get<std::string>;
    v.sale = j.at("sale").get<LolPurchaseWidgetSale>;
    v.name = j.at("name").get<std::string>;
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>;
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>;
    v.quantity = j.at("quantity").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetValidationResponseItem_HPP
