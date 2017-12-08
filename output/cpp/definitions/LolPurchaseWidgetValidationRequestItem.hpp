#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetValidationRequestItem_t {
    LolPurchaseWidgetItemKey_t itemKey;
    int32_t_t quantity;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetValidationRequestItem_t& v) {
    j["itemKey"] = v.itemKey;
    j["quantity"] = v.quantity;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetValidationRequestItem_t& v) {
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    v.quantity = j.at("quantity").get<int32_t_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetValidationRequestItem_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
