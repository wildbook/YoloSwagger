#ifndef SWAGGER_TYPES_LolPurchaseWidgetTransaction_HPP
#define SWAGGER_TYPES_LolPurchaseWidgetTransaction_HPP
#include <json.hpp>
#include "LolPurchaseWidgetItemKey.hpp"
namespace leagueapi {
  // 
  struct LolPurchaseWidgetTransaction {
    // 
    std::string iconUrl;
    // 
    std::string transactionId;
    // 
    std::string itemName;
    // 
    LolPurchaseWidgetItemKey itemKey;
  };

  inline void to_json(nlohmann::json& j, const LolPurchaseWidgetTransaction& v) {
    j["iconUrl"] = v.iconUrl;
    j["transactionId"] = v.transactionId;
    j["itemName"] = v.itemName;
    j["itemKey"] = v.itemKey;
  }

  inline void from_json(const nlohmann::json& j, LolPurchaseWidgetTransaction& v) {
    v.iconUrl = j.at("iconUrl").get<std::string>;
    v.transactionId = j.at("transactionId").get<std::string>;
    v.itemName = j.at("itemName").get<std::string>;
    v.itemKey = j.at("itemKey").get<LolPurchaseWidgetItemKey>;
  }

}
#endif // SWAGGER_TYPES_LolPurchaseWidgetTransaction_HPP
