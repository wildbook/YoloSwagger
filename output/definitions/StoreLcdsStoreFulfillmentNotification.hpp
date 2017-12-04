#ifndef SWAGGER_TYPES_StoreLcdsStoreFulfillmentNotification_HPP
#define SWAGGER_TYPES_StoreLcdsStoreFulfillmentNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct StoreLcdsStoreFulfillmentNotification {
    // 
    nlohmann::json data;
    // 
    std::string inventoryType;
    // 
    int64_t ip;
    // 
    int64_t rp;
  };

  inline void to_json(nlohmann::json& j, const StoreLcdsStoreFulfillmentNotification& v) {
    j["data"] = v.data;
    j["inventoryType"] = v.inventoryType;
    j["ip"] = v.ip;
    j["rp"] = v.rp;
  }

  inline void from_json(const nlohmann::json& j, StoreLcdsStoreFulfillmentNotification& v) {
    v.data = j.at("data").get<nlohmann::json>;
    v.inventoryType = j.at("inventoryType").get<std::string>;
    v.ip = j.at("ip").get<int64_t>;
    v.rp = j.at("rp").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_StoreLcdsStoreFulfillmentNotification_HPP
