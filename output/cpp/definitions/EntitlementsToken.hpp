#ifndef SWAGGER_TYPES_EntitlementsToken_HPP
#define SWAGGER_TYPES_EntitlementsToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EntitlementsToken {
    // 
    std::vector<std::string> entitlements;
    // 
    std::string token;
    // 
    std::string subject;
    // 
    std::string accessToken;
    // 
    std::string issuer;
  };

  inline void to_json(nlohmann::json& j, const EntitlementsToken& v) {
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
    j["subject"] = v.subject;
    j["accessToken"] = v.accessToken;
    j["issuer"] = v.issuer;
  }

  inline void from_json(const nlohmann::json& j, EntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>;
    v.token = j.at("token").get<std::string>;
    v.subject = j.at("subject").get<std::string>;
    v.accessToken = j.at("accessToken").get<std::string>;
    v.issuer = j.at("issuer").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EntitlementsToken_HPP
