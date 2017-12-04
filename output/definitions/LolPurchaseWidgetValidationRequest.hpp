#ifndef SWAGGER_TYPES_LolPurchaseWidgetValidationRequest_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetValidationRequest_HPP
#include <json.hpp>
#include "LolPurchaseWidgetValidationRequestItem.hpp"
namespace test {
  // 
  struct LolPurchaseWidgetValidationRequest {
'    // 
    std::vector<LolPurchaseWidgetValidationRequestItem> items;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationRequest& v) {
    j["items"] = v.items;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationRequest& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationRequestItem>>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetValidationRequest_HPP
