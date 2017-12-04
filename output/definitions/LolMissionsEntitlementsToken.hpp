#ifndef SWAGGER_TYPES_LolMissionsEntitlementsToken_HPP
#define SWAGGER_TYPES_LolMissionsEntitlementsToken_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolMissionsEntitlementsToken {
'    // 
    std::vector<std::string> entitlements;
  };

  void to_json(nlohmann::json& j, const LolMissionsEntitlementsToken& v) {
    j["entitlements"] = v.entitlements;
  }

  void from_json(const nlohmann::json& j, LolMissionsEntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>;
  }

}
#endif // SWAGGER_TYPES_LolMissionsEntitlementsToken_HPP
