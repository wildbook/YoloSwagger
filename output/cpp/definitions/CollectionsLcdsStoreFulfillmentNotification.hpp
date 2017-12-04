#ifndef SWAGGER_TYPES_CollectionsLcdsStoreFulfillmentNotification_HPP
#define SWAGGER_TYPES_CollectionsLcdsStoreFulfillmentNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct CollectionsLcdsStoreFulfillmentNotification {
    // 
    std::string inventoryType;
    // 
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsStoreFulfillmentNotification& v) {
    j["inventoryType"] = v.inventoryType;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsStoreFulfillmentNotification& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.data = j.at("data").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsStoreFulfillmentNotification_HPP
