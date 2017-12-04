#ifndef SWAGGER_TYPES_LolInventoryRmsEntitlementPayload_HPP
#define SWAGGER_TYPES_LolInventoryRmsEntitlementPayload_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolInventoryRmsEntitlementPayload {
'    // 
    std::string itemId;
    // 
    std::string itemTypeId;
  };

  void to_json(nlohmann::json& j, const LolInventoryRmsEntitlementPayload& v) {
    j["itemId"] = v.itemId;
    j["itemTypeId"] = v.itemTypeId;
  }

  void from_json(const nlohmann::json& j, LolInventoryRmsEntitlementPayload& v) {
    v.itemId = j.at("itemId").get<std::string>;
    v.itemTypeId = j.at("itemTypeId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryRmsEntitlementPayload_HPP
