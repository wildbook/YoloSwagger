#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EntitlementsToken_t {
    std::string subject;
    std::string token;
    std::vector<std::string> entitlements;
    std::string issuer;
    std::string accessToken;
  };

  inline void to_json(nlohmann::json& j, const EntitlementsToken_t& v) {
    j["subject"] = v.subject;
    j["token"] = v.token;
    j["entitlements"] = v.entitlements;
    j["issuer"] = v.issuer;
    j["accessToken"] = v.accessToken;
  }

  inline void from_json(const nlohmann::json& j, EntitlementsToken_t& v) {
    v.subject = j.at("subject").get<std::string>();
    v.token = j.at("token").get<std::string>();
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.issuer = j.at("issuer").get<std::string>();
    v.accessToken = j.at("accessToken").get<std::string>();
  }
  inline std::string to_string(const EntitlementsToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
