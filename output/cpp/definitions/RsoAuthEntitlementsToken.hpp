#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthEntitlementsToken_t {
    std::string token;
    uint64_t expiry;
    std::vector<std::string> entitlements;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthEntitlementsToken_t& v) {
    j["token"] = v.token;
    j["expiry"] = v.expiry;
    j["entitlements"] = v.entitlements;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthEntitlementsToken_t& v) {
    v.token = j.at("token").get<std::string>();
    v.expiry = j.at("expiry").get<uint64_t>();
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
  }
  inline std::string to_string(const RsoAuthEntitlementsToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
