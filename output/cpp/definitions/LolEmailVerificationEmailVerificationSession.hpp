#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEmailVerificationEmailVerificationSession_t {
    std::string email;
    bool emailVerified;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationEmailVerificationSession_t& v) {
    j["email"] = v.email;
    j["emailVerified"] = v.emailVerified;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationEmailVerificationSession_t& v) {
    v.email = j.at("email").get<std::string>();
    v.emailVerified = j.at("emailVerified").get<bool>();
  }
}
