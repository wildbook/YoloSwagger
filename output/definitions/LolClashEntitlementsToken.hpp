#ifndef SWAGGER_TYPES_LolClashEntitlementsToken_HPP
#define SWAGGER_TYPES_LolClashEntitlementsToken_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolClashEntitlementsToken {
'    // 
    std::string accessToken;
    // 
    std::vector<std::string> entitlements;
    // 
    std::string token;
  };

  void to_json(nlohmann::json& j, const LolClashEntitlementsToken& v) {
    j["accessToken"] = v.accessToken;
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
  }

  void from_json(const nlohmann::json& j, LolClashEntitlementsToken& v) {
    v.accessToken = j.at("accessToken").get<std::string>;
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>;
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolClashEntitlementsToken_HPP
