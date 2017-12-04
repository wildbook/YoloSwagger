#ifndef SWAGGER_TYPES_StoreLcdsStoreFulfillmentNotification_HPP
#define SWAGGER_TYPES_StoreLcdsStoreFulfillmentNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct StoreLcdsStoreFulfillmentNotification {
    // 
    std::string inventoryType;
    // 
    int64_t rp;
    // 
    nlohmann::json data;
    // 
    int64_t ip;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsStoreFulfillmentNotification& v) {
    j["inventoryType"] = v.inventoryType;
    j["rp"] = v.rp;
    j["data"] = v.data;
    j["ip"] = v.ip;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsStoreFulfillmentNotification& v) {
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.rp = j.at("rp").get<int64_t>;
    v.data = j.at("data").get<nlohmann::json>;
    v.ip = j.at("ip").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_StoreLcdsStoreFulfillmentNotification_HPP
