#ifndef SWAGGER_TYPES_EntitlementsToken_HPP
#define SWAGGER_TYPES_EntitlementsToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct EntitlementsToken {
    // 
    std::string accessToken;
    // 
    std::vector<std::string> entitlements;
    // 
    std::string issuer;
    // 
    std::string subject;
    // 
    std::string token;
  };

  inline void to_json(nlohmann::json& j, const EntitlementsToken& v) {
    j["accessToken"] = v.accessToken;
    j["entitlements"] = v.entitlements;
    j["issuer"] = v.issuer;
    j["subject"] = v.subject;
    j["token"] = v.token;
  }

  inline void from_json(const nlohmann::json& j, EntitlementsToken& v) {
    v.accessToken = j.at("accessToken").get<std::string>;
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>;
    v.issuer = j.at("issuer").get<std::string>;
    v.subject = j.at("subject").get<std::string>;
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_EntitlementsToken_HPP
