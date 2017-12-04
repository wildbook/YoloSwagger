#ifndef SWAGGER_TYPES_LolPurchaseWidgetItemPrice_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetItemPrice_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPurchaseWidgetItemPrice {
    // 
    int32_t price;
    // 
    std::string currencyType;
    // 
    bool purchasable;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetItemPrice& v) {
    j["price"] = v.price;
    j["currencyType"] = v.currencyType;
    j["purchasable"] = v.purchasable;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetItemPrice& v) {
    v.price = j.at("price").get<int32_t>;
    v.currencyType = j.at("currencyType").get<std::string>;
    v.purchasable = j.at("purchasable").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetItemPrice_HPP
