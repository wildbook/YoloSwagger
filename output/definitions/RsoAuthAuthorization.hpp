#ifndef SWAGGER_TYPES_RsoAuthAuthorization_HPP
#define SWAGGER_TYPES_RsoAuthAuthorization_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthAuthorization {
    // 
    uint64_t currentAccountId;
    // 
    std::string currentPlatformId;
    // 
    std::string subject;
  };

  void to_json(nlohmann::json& j, const RsoAuthAuthorization& v) {
    j["currentAccountId"] = v.currentAccountId;
    j["currentPlatformId"] = v.currentPlatformId;
    j["subject"] = v.subject;
  }

  void from_json(const nlohmann::json& j, RsoAuthAuthorization& v) {
    v.currentAccountId = j.at("currentAccountId").get<uint64_t>;
    v.currentPlatformId = j.at("currentPlatformId").get<std::string>;
    v.subject = j.at("subject").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthAuthorization_HPP
