#ifndef SWAGGER_TYPES_LolPurchaseWidgetSale_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetSale_HPP
#include <json.hpp>
#include "LolPurchaseWidgetItemPrice.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetSale {
    // 
    std::vector<LolPurchaseWidgetItemPrice> prices;
    // 
    std::string startDate;
    // 
    std::string endDate;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetSale& v) {
    j["prices"] = v.prices;
    j["startDate"] = v.startDate;
    j["endDate"] = v.endDate;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetSale& v) {
    v.prices = j.at("prices").get<std::vector<LolPurchaseWidgetItemPrice>>;
    v.startDate = j.at("startDate").get<std::string>;
    v.endDate = j.at("endDate").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetSale_HPP
