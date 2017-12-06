#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthEntitlementsToken_t {
    uint64_t expiry;
    std::vector<std::string> entitlements;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthEntitlementsToken_t& v) {
    j["expiry"] = v.expiry;
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthEntitlementsToken_t& v) {
    v.expiry = j.at("expiry").get<uint64_t>();
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.token = j.at("token").get<std::string>();
  }
}
