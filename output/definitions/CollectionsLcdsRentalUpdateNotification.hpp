#ifndef SWAGGER_TYPES_CollectionsLcdsRentalUpdateNotification_HPP
#define SWAGGER_TYPES_CollectionsLcdsRentalUpdateNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct CollectionsLcdsRentalUpdateNotification {
    // 
    nlohmann::json data;
    // 
    std::string inventoryType;
  };

  void to_json(nlohmann::json& j, const CollectionsLcdsRentalUpdateNotification& v) {
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
  }

  void from_json(const nlohmann::json& j, CollectionsLcdsRentalUpdateNotification& v) {
    v.data = j.at("data").get<nlohmann::json>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsRentalUpdateNotification_HPP
