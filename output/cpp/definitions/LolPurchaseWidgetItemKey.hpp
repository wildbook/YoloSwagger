#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPurchaseWidgetItemKey_t {
    int32_t itemId;
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetItemKey_t& v) {
    j["itemId"] = v.itemId;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetItemKey_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
  }
}
