#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationRequestItem_t {
    int32_t quantity;
    LolPurchaseWidgetItemKey_t itemKey;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationRequestItem_t& v) {
    j["quantity"] = v.quantity;
    j["itemKey"] = v.itemKey;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationRequestItem_t& v) {
    v.quantity = j.at("quantity").get<int32_t>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetValidationRequestItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
