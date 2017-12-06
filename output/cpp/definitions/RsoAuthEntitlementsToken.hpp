#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthEntitlementsToken_t {
    std::vector<std::string> entitlements;
    uint64_t expiry;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthEntitlementsToken_t& v) {
    j["entitlements"] = v.entitlements;
    j["expiry"] = v.expiry;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthEntitlementsToken_t& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.expiry = j.at("expiry").get<uint64_t>();
    v.token = j.at("token").get<std::string>();
  }
}
