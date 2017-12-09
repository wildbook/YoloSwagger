#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct StoreLcdsStoreFulfillmentNotification_t {
    int64_t rp;
    nlohmann::json data;
    std::string inventoryType;
    int64_t ip;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsStoreFulfillmentNotification_t& v) {
    j["rp"] = v.rp;
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
    j["ip"] = v.ip;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsStoreFulfillmentNotification_t& v) {
    v.rp = j.at("rp").get<int64_t>();
    v.data = j.at("data").get<nlohmann::json>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.ip = j.at("ip").get<int64_t>();
  }
  inline std::string to_string(const StoreLcdsStoreFulfillmentNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
