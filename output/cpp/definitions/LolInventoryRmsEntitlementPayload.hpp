#ifndef SWAGGER_TYPES_LolInventoryRmsEntitlementPayload_HPP
#define SWAGGER_TYPES_LolInventoryRmsEntitlementPayload_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolInventoryRmsEntitlementPayload {
    // 
    std::string itemId;
    // 
    std::string itemTypeId;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryRmsEntitlementPayload& v) {
    j["itemId"] = v.itemId;
    j["itemTypeId"] = v.itemTypeId;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryRmsEntitlementPayload& v) {
    v.itemId = j.at("itemId").get<std::string>;
    v.itemTypeId = j.at("itemTypeId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryRmsEntitlementPayload_HPP
