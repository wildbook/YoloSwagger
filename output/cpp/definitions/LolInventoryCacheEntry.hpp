#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryCacheEntry_t {
    bool valid;
    std::string signedInventoryJwt;
    uint64_t expirationMS;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryCacheEntry_t& v) {
    j["valid"] = v.valid;
    j["signedInventoryJwt"] = v.signedInventoryJwt;
    j["expirationMS"] = v.expirationMS;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryCacheEntry_t& v) {
    v.valid = j.at("valid").get<bool>();
    v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string>();
    v.expirationMS = j.at("expirationMS").get<uint64_t>();
  }
  inline std::string to_string(const LolInventoryCacheEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
