#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct ActiveBoostsLcdsStoreFulfillmentNotification_t {
    std::string_t inventoryType;
    nlohmann::json_t data;
  };

  inline void to_json(nlohmann::json& j, const ActiveBoostsLcdsStoreFulfillmentNotification_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, ActiveBoostsLcdsStoreFulfillmentNotification_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string_t>();
    v.data = j.at("data").get<nlohmann::json_t>();
  }
  inline std::string to_string(const ActiveBoostsLcdsStoreFulfillmentNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
