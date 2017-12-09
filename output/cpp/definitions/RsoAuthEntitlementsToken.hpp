#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthEntitlementsToken_t {
    std::string token;
    std::vector<std::string> entitlements;
    uint64_t expiry;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthEntitlementsToken_t& v) {
    j["token"] = v.token;
    j["entitlements"] = v.entitlements;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthEntitlementsToken_t& v) {
    v.token = j.at("token").get<std::string>();
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.expiry = j.at("expiry").get<uint64_t>();
  }
  inline std::string to_string(const RsoAuthEntitlementsToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
