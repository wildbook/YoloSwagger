#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EntitlementsToken_t {
    std::string issuer;
    std::string token;
    std::string subject;
    std::string accessToken;
    std::vector<std::string> entitlements;
  };

  inline void to_json(nlohmann::json& j, const EntitlementsToken_t& v) {
    j["issuer"] = v.issuer;
    j["token"] = v.token;
    j["subject"] = v.subject;
    j["accessToken"] = v.accessToken;
    j["entitlements"] = v.entitlements;
  }

  inline void from_json(const nlohmann::json& j, EntitlementsToken_t& v) {
    v.issuer = j.at("issuer").get<std::string>();
    v.token = j.at("token").get<std::string>();
    v.subject = j.at("subject").get<std::string>();
    v.accessToken = j.at("accessToken").get<std::string>();
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
  }
  inline std::string to_string(const EntitlementsToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
