#ifndef SWAGGER_TYPES_LolLoginUsernameAndPassword_HPP
#define SWAGGER_TYPES_LolLoginUsernameAndPassword_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginUsernameAndPassword {
    // 
    std::string username;
    // 
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolLoginUsernameAndPassword& v) {
    j["username"] = v.username;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolLoginUsernameAndPassword& v) {
    v.username = j.at("username").get<std::string>;
    v.password = j.at("password").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginUsernameAndPassword_HPP
