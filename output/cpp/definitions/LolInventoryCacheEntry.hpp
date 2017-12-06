#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryCacheEntry_t {
    uint64_t expirationMS;
    std::string signedInventoryJwt;
    bool valid;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryCacheEntry_t& v) {
    j["expirationMS"] = v.expirationMS;
    j["signedInventoryJwt"] = v.signedInventoryJwt;
    j["valid"] = v.valid;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryCacheEntry_t& v) {
    v.expirationMS = j.at("expirationMS").get<uint64_t>();
    v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>();
    v.valid = j.at("valid").get<bool>();
  }
}
