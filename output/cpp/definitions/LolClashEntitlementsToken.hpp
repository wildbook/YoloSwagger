#ifndef SWAGGER_TYPES_LolClashEntitlementsToken_HPP
#define SWAGGER_TYPES_LolClashEntitlementsToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolClashEntitlementsToken {
    // 
    std::vector<std::string> entitlements;
    // 
    std::string token;
    // 
    std::string accessToken;
  };

  inline void to_json(nlohmann::json& j, const LolClashEntitlementsToken& v) {
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
    j["accessToken"] = v.accessToken;
  }

  inline void from_json(const nlohmann::json& j, LolClashEntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>;
    v.token = j.at("token").get<std::string>;
    v.accessToken = j.at("accessToken").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashEntitlementsToken_HPP
