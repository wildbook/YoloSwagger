#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEmailVerificationEmailUpdate_t {
    std::string email;
    std::string password;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationEmailUpdate_t& v) {
    j["email"] = v.email;
    j["password"] = v.password;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationEmailUpdate_t& v) {
    v.email = j.at("email").get<std::string>();
    v.password = j.at("password").get<std::string>();
  }
}
