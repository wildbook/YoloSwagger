#ifndef SWAGGER_TYPES_LolLoginRSOPlayerCredentials_HPP
#define SWAGGER_TYPES_LolLoginRSOPlayerCredentials_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginRSOPlayerCredentials {
    // 
    std::string platformId;
    // 
    std::string username;
    // 
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolLoginRSOPlayerCredentials& v) {
    j["platformId"] = v.platformId;
    j["username"] = v.username;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolLoginRSOPlayerCredentials& v) {
    v.platformId = j.at("platformId").get<std::string>;
    v.username = j.at("username").get<std::string>;
    v.password = j.at("password").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginRSOPlayerCredentials_HPP
