#ifndef SWAGGER_TYPES_RsoAuthEntitlementsToken_HPP
#define SWAGGER_TYPES_RsoAuthEntitlementsToken_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthEntitlementsToken {
    // 
    std::vector<std::string> entitlements;
    // 
    std::string token;
    // 
    uint64_t expiry;
  };

  inline void to_json(nlohmann::json& j, const RsoAuthEntitlementsToken& v) {
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
    j["expiry"] = v.expiry;
  }

  inline void from_json(const nlohmann::json& j, RsoAuthEntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>;
    v.token = j.at("token").get<std::string>;
    v.expiry = j.at("expiry").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthEntitlementsToken_HPP
