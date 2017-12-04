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

  void to_json(nlohmann::json& j, const LolEmailVerificationEmailVerificationSession& v) {
    j["email"] = v.email;
    j["emailVerified"] = v.emailVerified;
  }

  void from_json(const nlohmann::json& j, LolEmailVerificationEmailVerificationSession& v) {
    v.email = j.at("email").get<std::string>;
    v.emailVerified = j.at("emailVerified").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LolEmailVerificationEmailVerificationSession_HPP
