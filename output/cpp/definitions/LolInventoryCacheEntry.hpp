#ifndef SWAGGER_TYPES_LolInventoryCacheEntry_HPP
#define SWAGGER_TYPES_LolInventoryCacheEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolInventoryCacheEntry {
    // 
    std::string signedInventoryJwt;
    // 
    bool valid;
    // 
    uint64_t expirationMS;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryCacheEntry& v) {
    j["signedInventoryJwt"] = v.signedInventoryJwt;
    j["valid"] = v.valid;
    j["expirationMS"] = v.expirationMS;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryCacheEntry& v) {
    v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>;
    v.valid = j.at("valid").get<bool>;
    v.expirationMS = j.at("expirationMS").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryCacheEntry_HPP
