#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolClashEntitlementsToken_t {
    std::vector<std::string> entitlements;
    std::string token;
    std::string accessToken;
  };

  inline void to_json(nlohmann::json& j, const LolClashEntitlementsToken_t& v) {
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
    j["accessToken"] = v.accessToken;
  }

  inline void from_json(const nlohmann::json& j, LolClashEntitlementsToken_t& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.token = j.at("token").get<std::string>();
    v.accessToken = j.at("accessToken").get<std::string>();
  }
  inline std::string to_string(const LolClashEntitlementsToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
