#ifndef SWAGGER_TYPES_LolEmailVerificationEmailVerificationSession_HPP
#define SWAGGER_TYPES_LolEmailVerificationEmailVerificationSession_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEmailVerificationEmailVerificationSession {
    // 
    bool emailVerified;
    // 
    std::string email;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationEmailVerificationSession& v) {
    j["emailVerified"] = v.emailVerified;
    j["email"] = v.email;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationEmailVerificationSession& v) {
    v.emailVerified = j.at("emailVerified").get<bool>;
    v.email = j.at("email").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolEmailVerificationEmailVerificationSession_HPP
