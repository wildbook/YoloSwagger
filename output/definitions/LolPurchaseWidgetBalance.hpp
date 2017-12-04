#ifndef SWAGGER_TYPES_LolPurchaseWidgetBalance_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetBalance_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPurchaseWidgetBalance {
    // 
    int32_t amount;
    // 
    std::string currencyType;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetBalance& v) {
    j["amount"] = v.amount;
    j["currencyType"] = v.currencyType;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetBalance& v) {
    v.amount = j.at("amount").get<int32_t>;
    v.currencyType = j.at("currencyType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetBalance_HPP
