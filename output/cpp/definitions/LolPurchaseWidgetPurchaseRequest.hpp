#ifndef SWAGGER_TYPES_LolPurchaseWidgetPurchaseRequest_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetPurchaseRequest_HPP
#include <json.hpp>
#include "LolPurchaseWidgetPurchaseItem.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetPurchaseRequest {
    // 
    std::vector<LolPurchaseWidgetPurchaseItem> items;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetPurchaseRequest& v) {
    j["items"] = v.items;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetPurchaseRequest& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetPurchaseItem>>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetPurchaseRequest_HPP
