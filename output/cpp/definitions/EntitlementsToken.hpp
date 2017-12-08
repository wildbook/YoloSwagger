#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EntitlementsToken_t {
    std::vector<std::string> entitlements;
    std::string token;
    std::string subject;
    std::string accessToken;
    std::string issuer;
  };

  inline void to_json(nlohmann::json& j, const EntitlementsToken_t& v) {
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
    j["subject"] = v.subject;
    j["accessToken"] = v.accessToken;
    j["issuer"] = v.issuer;
  }

  inline void from_json(const nlohmann::json& j, EntitlementsToken_t& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.token = j.at("token").get<std::string>();
    v.subject = j.at("subject").get<std::string>();
    v.accessToken = j.at("accessToken").get<std::string>();
    v.issuer = j.at("issuer").get<std::string>();
  }
  inline std::string to_string(const EntitlementsToken_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
