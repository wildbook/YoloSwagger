#ifndef SWAGGER_TYPES_LolEmailVerificationEmailUpdate_HPP
#define SWAGGER_TYPES_LolEmailVerificationEmailUpdate_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEmailVerificationEmailUpdate {
    // 
    std::string email;
    // 
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationEmailUpdate& v) {
    j["email"] = v.email;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationEmailUpdate& v) {
    v.email = j.at("email").get<std::string>;
    v.password = j.at("password").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEmailVerificationEmailUpdate_HPP
