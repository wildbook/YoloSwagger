#pragma once
#include <json.hpp>
#include <optional>
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  struct LolPurchaseWidgetTransaction_t {
    std::string_t iconUrl;
    std::string_t transactionId;
    std::string_t itemName;
    LolPurchaseWidgetItemKey_t itemKey;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetTransaction_t& v) {
    j["iconUrl"] = v.iconUrl;
    j["transactionId"] = v.transactionId;
    j["itemName"] = v.itemName;
    j["itemKey"] = v.itemKey;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetTransaction_t& v) {
    v.iconUrl = j.at("iconUrl").get<std::string_t>();
    v.transactionId = j.at("transactionId").get<std::string_t>();
    v.itemName = j.at("itemName").get<std::string_t>();
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey_t>();
  }
  inline std::string to_string(const LolPurchaseWidgetTransaction_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
