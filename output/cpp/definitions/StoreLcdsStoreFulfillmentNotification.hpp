#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsStoreFulfillmentNotification_t {
    std::string inventoryType;
    nlohmann::json data;
    int64_t rp;
    int64_t ip;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsStoreFulfillmentNotification_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["data"] = v.data;
    j["rp"] = v.rp;
    j["ip"] = v.ip;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsStoreFulfillmentNotification_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.data = j.at("data").get<nlohmann::json>();
    v.rp = j.at("rp").get<int64_t>();
    v.ip = j.at("ip").get<int64_t>();
  }
}
