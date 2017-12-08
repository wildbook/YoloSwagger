#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsStoreFulfillmentNotification_t {
    int64_t ip;
    std::string inventoryType;
    nlohmann::json data;
    int64_t rp;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsStoreFulfillmentNotification_t& v) {
    j["ip"] = v.ip;
    j["inventoryType"] = v.inventoryType;
    j["data"] = v.data;
    j["rp"] = v.rp;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsStoreFulfillmentNotification_t& v) {
    v.ip = j.at("ip").get<int64_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.data = j.at("data").get<nlohmann::json>();
    v.rp = j.at("rp").get<int64_t>();
  }
  inline std::string to_string(const StoreLcdsStoreFulfillmentNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
