#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsStoreFulfillmentNotification_t {
    std::string inventoryType;
    int64_t ip;
    int64_t rp;
    nlohmann::json data;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsStoreFulfillmentNotification_t& v) {
    j["inventoryType"] = v.inventoryType;
    j["ip"] = v.ip;
    j["rp"] = v.rp;
    j["data"] = v.data;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsStoreFulfillmentNotification_t& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.ip = j.at("ip").get<int64_t>();
    v.rp = j.at("rp").get<int64_t>();
    v.data = j.at("data").get<nlohmann::json>();
  }
  inline std::string to_string(const StoreLcdsStoreFulfillmentNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
