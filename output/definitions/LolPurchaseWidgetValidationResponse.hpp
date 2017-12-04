#ifndef SWAGGER_TYPES_LolPurchaseWidgetValidationResponse_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetValidationResponse_HPP
#include <json.hpp>
#include "LolPurchaseWidgetValidationResponseItem.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetValidationResponse {
    // 
    std::vector<LolPurchaseWidgetValidationResponseItem> items;
    // 
    bool valid;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationResponse& v) {
    j["items"] = v.items;
    j["valid"] = v.valid;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationResponse& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationResponseItem>>;
    v.valid = j.at("valid").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetValidationResponse_HPP
