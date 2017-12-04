#ifndef SWAGGER_TYPES_LolPurchaseWidgetValidationRequestItem_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetValidationRequestItem_HPP
#include <json.hpp>
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetValidationRequestItem {
    // 
    LolPurchaseWidgetItemKey itemKey;
    // 
    int32_t quantity;
  };

  void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationRequestItem& v) {
    j["itemKey"] = v.itemKey;
    j["quantity"] = v.quantity;
  }

  void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationRequestItem& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>;
    v.quantity = j.at("quantity").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetValidationRequestItem_HPP
