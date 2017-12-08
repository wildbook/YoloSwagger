#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEmailVerificationEmailVerificationSession_t {
    bool_t emailVerified;
    std::string_t email;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationEmailVerificationSession_t& v) {
    j["emailVerified"] = v.emailVerified;
    j["email"] = v.email;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationEmailVerificationSession_t& v) {
    v.emailVerified = j.at("emailVerified").get<bool_t>();
    v.email = j.at("email").get<std::string_t>();
  }
  inline std::string to_string(const LolEmailVerificationEmailVerificationSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
