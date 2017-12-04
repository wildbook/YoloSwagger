#ifndef SWAGGER_TYPES_LolAccountVerificationPlatformGeneratedCredentials_HPP
#define SWAGGER_TYPES_LolAccountVerificationPlatformGeneratedCredentials_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolAccountVerificationPlatformGeneratedCredentials {
    // 
    std::string username;
    // 
    std::string password;
    // 
    nlohmann::json gasToken;
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationPlatformGeneratedCredentials& v) {
    j["username"] = v.username;
    j["password"] = v.password;
    j["gasToken"] = v.gasToken;
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationPlatformGeneratedCredentials& v) {
    v.username = j.at("username").get<std::string>;
    v.password = j.at("password").get<std::string>;
    v.gasToken = j.at("gasToken").get<nlohmann::json>;
  }

}
#endif // SWAGGER_TYPES_LolAccountVerificationPlatformGeneratedCredentials_HPP
