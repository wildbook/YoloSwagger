#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetTransaction_t {
    std::string iconUrl;
    LolPurchaseWidgetItemKey_t itemKey;
    std::string itemName;
    std::string transactionId;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetTransaction_t& v) {
    j["iconUrl"] = v.iconUrl;
    j["itemKey"] = v.itemKey;
    j["itemName"] = v.itemName;
    j["transactionId"] = v.transactionId;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetTransaction_t& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
    v.itemName = j.at("itemName").get<std::string>();
    v.transactionId = j.at("transactionId").get<std::string>();
  }
}
