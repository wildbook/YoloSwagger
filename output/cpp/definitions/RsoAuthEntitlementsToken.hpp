#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RsoAuthEntitlementsToken_t {
    std::vector<std::string> entitlements;
    std::string_t token;
    uint64_t_t expiry;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthEntitlementsToken_t& v) {
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthEntitlementsToken_t& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.token = j.at("token").get<std::string_t>();
    v.expiry = j.at("expiry").get<uint64_t_t>();
  }
  inline std::string to_string(const RsoAuthEntitlementsToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
