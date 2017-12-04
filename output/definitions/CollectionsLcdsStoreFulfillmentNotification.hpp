#ifndef SWAGGER_TYPES_CollectionsLcdsStoreFulfillmentNotification_HPP
#define SWAGGER_TYPES_CollectionsLcdsStoreFulfillmentNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct CollectionsLcdsStoreFulfillmentNotification {
    // 
    nlohmann::json data;
    // 
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsStoreFulfillmentNotification& v) {
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsStoreFulfillmentNotification& v) {
    v.data = j.at("data").get<nlohmann::json>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsStoreFulfillmentNotification_HPP
