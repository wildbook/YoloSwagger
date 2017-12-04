#ifndef SWAGGER_TYPES_ActiveBoostsLcdsStoreFulfillmentNotification_HPP
#define SWAGGER_TYPES_ActiveBoostsLcdsStoreFulfillmentNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct ActiveBoostsLcdsStoreFulfillmentNotification {
    // 
    nlohmann::json data;
    // 
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoostsLcdsStoreFulfillmentNotification& v) {
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoostsLcdsStoreFulfillmentNotification& v) {
    v.data = j.at("data").get<nlohmann::json>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_ActiveBoostsLcdsStoreFulfillmentNotification_HPP
