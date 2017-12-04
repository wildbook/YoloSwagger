#ifndef SWAGGER_TYPES_LolLoginAuthorization_HPP
#define SWAGGER_TYPES_LolLoginAuthorization_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginAuthorization {
    // 
    uint64_t currentAccountId;
    // 
    std::string currentPlatformId;
    // 
    std::string subject;
  };

  void to_json(nlohmann::json& j, const LolLoginAuthorization& v) {
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["subject"] = v.subject;
  }

  void from_json(const nlohmann::json& j, LolLoginAuthorization& v) {
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>;
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>;
    v.subject = j.at("subject").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginAuthorization_HPP
