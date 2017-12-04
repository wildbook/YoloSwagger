#ifndef SWAGGER_TYPES_LolEmailVerificationEmailVerificationSession_HPP
#define SWAGGER_TYPES_LolEmailVerificationEmailVerificationSession_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolEmailVerificationEmailVerificationSession {
    // 
    std::string email;
    // 
    bool emailVerified;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationEmailVerificationSession& v) {
    j["email"] = v.email;
    j["emailVerified"] = v.emailVerified;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationEmailVerificationSession& v) {
    v.email = j.at("email").get<std::string>;
    v.emailVerified = j.at("emailVerified").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolEmailVerificationEmailVerificationSession_HPP
