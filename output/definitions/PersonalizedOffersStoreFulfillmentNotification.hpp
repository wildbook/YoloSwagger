#ifndef SWAGGER_TYPES_PersonalizedOffersStoreFulfillmentNotification_HPP
#define SWAGGER_TYPES_PersonalizedOffersStoreFulfillmentNotification_HPP
#include <json.hpp>
namespace test {
  // 
  struct PersonalizedOffersStoreFulfillmentNotification {
'    // 
    nlohmann::json data;
    // 
    std::string inventoryType;
  };

  void to_json(nlohmann::json& j, const PersonalizedOffersStoreFulfillmentNotification& v) {
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
  }

  void from_json(const nlohmann::json& j, PersonalizedOffersStoreFulfillmentNotification& v) {
    v.data = j.at("data").get<nlohmann::json>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PersonalizedOffersStoreFulfillmentNotification_HPP
