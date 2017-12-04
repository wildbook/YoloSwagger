#ifndef SWAGGER_TYPES_RsoAuthEntitlementsToken_HPP
#define SWAGGER_TYPES_RsoAuthEntitlementsToken_HPP
#include <json.hpp>
namespace test {
  // 
  struct RsoAuthEntitlementsToken {
'    // 
    std::vector<std::string> entitlements;
    // 
    uint64_t expiry;
    // 
    std::string token;
  };

  void to_json(nlohmann::json& j, const RsoAuthEntitlementsToken& v) {
    j["entitlements"] = v.entitlements;
    j["expiry"] = v.expiry;
    j["token"] = v.token;
  }

  void from_json(const nlohmann::json& j, RsoAuthEntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>;
    v.expiry = j.at("expiry").get<uint64_t>;
    v.token = j.at("token").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthEntitlementsToken_HPP
