#ifndef SWAGGER_TYPES_LolEmailVerificationEmailUpdate_HPP
#define SWAGGER_TYPES_LolEmailVerificationEmailUpdate_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEmailVerificationEmailUpdate {
    // 
    std::string password;
    // 
    std::string email;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationEmailUpdate& v) {
    j["password"] = v.password;
    j["email"] = v.email;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationEmailUpdate& v) {
    v.password = j.at("password").get<std::string>;
    v.email = j.at("email").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEmailVerificationEmailUpdate_HPP
