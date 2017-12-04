#ifndef SWAGGER_TYPES_LolInventoryCacheEntry_HPP
#define SWAGGER_TYPES_LolInventoryCacheEntry_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolInventoryCacheEntry {
    // 
    uint64_t expirationMS;
    // 
    std::string signedInventoryJwt;
    // 
    bool valid;
  };

  void to_json(nlohmann::json& j, const LolInventoryCacheEntry& v) {
    j["expirationMS"] = v.expirationMS;
    j["signedInventoryJwt"] = v.signedInventoryJwt;
    j["valid"] = v.valid;
  }

  void from_json(const nlohmann::json& j, LolInventoryCacheEntry& v) {
    v.expirationMS = j.at("expirationMS").get<uint64_t>;
    v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>;
    v.valid = j.at("valid").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolInventoryCacheEntry_HPP
