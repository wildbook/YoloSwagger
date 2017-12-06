#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoostsLcdsStoreFulfillmentNotification_t {
    nlohmann::json data;
    std::string inventoryType;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoostsLcdsStoreFulfillmentNotification_t& v) {
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoostsLcdsStoreFulfillmentNotification_t& v) {
    v.data = j.at("data").get<nlohmann::json>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
  }
}
