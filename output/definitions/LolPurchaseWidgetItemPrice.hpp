#ifndef SWAGGER_TYPES_LolPurchaseWidgetItemPrice_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetItemPrice_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPurchaseWidgetItemPrice {
    // 
    std::string currencyType;
    // 
    int32_t price;
    // 
    bool purchasable;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetItemPrice& v) {
    j["currencyType"] = v.currencyType;
    j["price"] = v.price;
    j["purchasable"] = v.purchasable;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetItemPrice& v) {
    v.currencyType = j.at("currencyType").get<std::string>;
    v.price = j.at("price").get<int32_t>;
    v.purchasable = j.at("purchasable").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetItemPrice_HPP
