#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct CollectionsLcdsStoreFulfillmentNotification_t {
    nlohmann::json data;
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const CollectionsLcdsStoreFulfillmentNotification_t& v) {
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, CollectionsLcdsStoreFulfillmentNotification_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
  }
  inline std::string to_string(const CollectionsLcdsStoreFulfillmentNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
