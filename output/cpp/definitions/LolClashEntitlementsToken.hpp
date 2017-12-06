#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashEntitlementsToken_t {
    std::string accessToken;
    std::vector<std::string> entitlements;
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const LolClashEntitlementsToken_t& v) {
    j["accessToken"] = v.accessToken;
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, LolClashEntitlementsToken_t& v) {
    v.accessToken = j.at("accessToken").get<std::string>();
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.token = j.at("token").get<std::string>();
  }
}
