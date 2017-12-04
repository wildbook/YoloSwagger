#ifndef SWAGGER_TYPES_RsoAuthRSOPlayerCredentials_HPP
#define SWAGGER_TYPES_RsoAuthRSOPlayerCredentials_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RsoAuthRSOPlayerCredentials {
    // 
    std::string password;
    // 
    std::string platformId;
    // 
    std::string username;
  };

  void to_json(nlohmann::json& j, const RsoAuthRSOPlayerCredentials& v) {
    j["password"] = v.password;
    j["platformId"] = v.platformId;
    j["username"] = v.username;
  }

  void from_json(const nlohmann::json& j, RsoAuthRSOPlayerCredentials& v) {
    v.password = j.at("password").get<std::string>;
    v.platformId = j.at("platformId").get<std::string>;
    v.username = j.at("username").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RsoAuthRSOPlayerCredentials_HPP
