#ifndef SWAGGER_TYPES_LolPurchaseWidgetValidationResponseItem_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetValidationResponseItem_HPP
#include <json.hpp>
#include "LolPurchaseWidgetSale.hpp"
#include "LolPurchaseWidgetItemKey.hpp"
#include "LolPurchaseWidgetItemPrice.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetValidationResponseItem {
    // 
    std::string description;
    // 
    LolPurchaseWidgetItemKey itemKey;
    // 
    std::string name;
    // 
    std::vector<LolPurchaseWidgetItemPrice> prices;
    // 
    int32_t quantity;
    // 
    LolPurchaseWidgetSale sale;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponseItem& v) {
    j["description"] = v.description;
    j["itemKey"] = v.itemKey;
    j["name"] = v.name;
    j["prices"] = v.prices;
    j["quantity"] = v.quantity;
    j["sale"] = v.sale;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponseItem& v) {
    v.description = j.at("description").get<std::string>;
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>;
    v.name = j.at("name").get<std::string>;
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>;
    v.quantity = j.at("quantity").get<int32_t>;
    v.sale = j.at("sale").get<LolPurchaseWidgetSale>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetValidationResponseItem_HPP
