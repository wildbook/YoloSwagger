#ifndef SWAGGER_TYPES_LolLoginUsernameAndPassword_HPP
#define SWAGGER_TYPES_LolLoginUsernameAndPassword_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLoginUsernameAndPassword {
    // 
    std::string password;
    // 
    std::string username;
  };

  void to_json(nlohmann::json& j, const LolLoginUsernameAndPassword& v) {
    j["password"] = v.password;
    j["username"] = v.username;
  }

  void from_json(const nlohmann::json& j, LolLoginUsernameAndPassword& v) {
    v.password = j.at("password").get<std::string>;
    v.username = j.at("username").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginUsernameAndPassword_HPP
